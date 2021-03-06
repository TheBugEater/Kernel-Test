/*
 * video.cpp
 *
 *  Created on: 01/04/2016
 *      Author: Miguel
 */

#include <system.h>
#include <module.h>

gfx_t * gfx = 0;
char is_video_init = 0;

char video_modes_table[6][16] {
	"320x200","640x400","640x480",
	"800x600","1024x768","1280x1024"
};

void video_init(int mode) {
	gfx = (gfx_t*)malloc(sizeof(gfx_t));
	gfx->vid_mode = mode;
	gfx->height = video_height();
	gfx->width = video_width();
	gfx->depth = video_palette();
	gfx->vidmem = (char*) (mode ? 0xE0000000 : 0xB8000);

	if(mode) {
		/* Prepare video memory: */
		alloc_pages(0, 1, (uintptr_t)gfx->vidmem, (uintptr_t)gfx->vidmem + 0xFF0000);

	}

	symbol_add("gfx", (uintptr_t)gfx);
	is_video_init = 1;
}

void video_finalize(void) {
	 /* The only way now to access the graphic's context is through the graphics driver/module */
	symbol_remove("video_finalize");
	symbol_remove("gfx");
}
EXPORT_SYMBOL(video_finalize);

char vid_str[16];
char * video_mode_get(int mode) {
	char * _16_color = "16-color";
	char * _256_color = "256-color";
	char * _15_bit = "15-bit";
	char * _16_bit = "16-bit";
	char * _24_bit = "24-bit";
	char * palette_str;
	switch(video_palette()) {
	case 17: palette_str = _16_color; break;
	case 256: palette_str = _256_color; break;
	case 15: palette_str = _15_bit; break;
	case 16: palette_str = _16_bit; break;
	case 24: palette_str = _24_bit; break;
	}

	uint16_t video_w = video_width();
	if(video_w == 80)
		sprintf(vid_str, "Text Mode (80x60)");
	else if(video_w == (uint16_t)-1)
		sprintf(vid_str, "Unknown Mode");
	else
		sprintf(vid_str, "%dx%d:%s", video_w, video_height(), palette_str);
	return vid_str;
}

uint16_t video_palette(void) {
	if(is_video_init) return gfx->depth;
	switch(gfx->vid_mode) {
		case 269: case 272: case 275: case 278: case 281: return 15;
		case 270: case 273: case 276: case 279: case 282: return 16;
		case 271: case 274: case 277: case 280: case 283: return 24;
		case 256: case 257: case 259: case 261: case 263: return 256;
		case 258: case 262: case 106: case 260: return 17; /* It's actually 16 colors */
		case 0: return 0;
		default: return -1;
	}
}

uint16_t video_width(void) {
	if(is_video_init) return gfx->width;
	switch(gfx->vid_mode) {
		case 269: case 270: case 271: return 320;
		case 256: case 274: case 273: case 272: case 257: return 640;
		case 258: case 277: case 276: case 275: case 259: case 106: return 800;
		case 260: case 280: case 279: case 278: case 261: return 1024;
		case 262: case 283: case 282: case 281: case 263: return 1280;
		case 0: return 80;
		default: return -1;
	}
}

uint16_t video_height(void) {
	if(is_video_init) return gfx->height;
	switch(gfx->vid_mode) {
		case 269: case 270: case 271: return 200;
		case 256: return 400;
		case 257: case 274: case 273: case 272: return 480;
		case 258: case 277: case 276: case 275: case 259: case 106: return 600;
		case 260: case 280: case 279: case 278: case 261: return 768;
		case 262: case 283: case 282: case 281: case 263: return 1024;
		case 0: return 25;
		default: return -1;
	}
}

/****** GRAPHICS: *******/

