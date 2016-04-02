/*
 * terminal_font.h
 *
 *  Created on: 02/04/2016
 *      Author: Miguel
 */

#ifndef SRC_TERMINAL_TERMINAL_FONT_H_
#define SRC_TERMINAL_TERMINAL_FONT_H_

#define FONT_WIDTH 8
#define FONT_HEIGHT 13
#define FONT_W_PADDING (FONT_WIDTH)
#define FONT_H_PADDING (FONT_HEIGHT)
#define FONT_CHARS_PERLINE (gfx->width / FONT_WIDTH)
#define FONT_CHARS_PERCOLUMN (gfx->height / FONT_HEIGHT)
#define FONT_DEFAULT_COLOR rgb(186, 186, 186)
#define FONT_CHARCOUNT 95

static uint8_t kernel_default_font[FONT_CHARCOUNT][FONT_HEIGHT]
   {
	 {/* @0 ' ' (8 pixels wide) */
	 0xFF, //
	 0xFF, //
	 0xFF, //
	 0xFF, //
	 0xFF, //
	 0xFF, //
	 0xFF, //
	 0xFF, //
	 0xFF, //
	 0xFF, //
	 0xFF, //
	 0xFF, //
	 0xFF, //

	 },{/* @13 '!' (8 pixels wide) */
	 0x00, //
	 0x18, //    ##
	 0x18, //    ##
	 0x18, //    ##
	 0x18, //    ##
	 0x18, //    ##
	 0x18, //    ##
	 0x00, //
	 0x18, //    ##
	 0x18, //    ##
	 0x00, //
	 0x00, //
	 0x00, //

	 },{/* @26 '"' (8 pixels wide) */
	 0x00, //
	 0x6C, //  ## ##
	 0x6C, //  ## ##
	 0x6C, //  ## ##
	 0x00, //
	 0x00, //
	 0x00, //
	 0x00, //
	 0x00, //
	 0x00, //
	 0x00, //
	 0x00, //
	 0x00, //

	 },{/* @39 '#' (8 pixels wide) */
	 0x00, //
	 0x00, //
	 0x24, //   #  #
	 0x24, //   #  #
	 0xFE, // #######
	 0x24, //   #  #
	 0x48, //  #  #
	 0xFE, // #######
	 0x48, //  #  #
	 0x48, //  #  #
	 0x00, //
	 0x00, //
	 0x00, //

	 },{/* @52 '$' (8 pixels wide) */
	 0x08, //     #
	 0x08, //     #
	 0x3C, //   ####
	 0x68, //  ## #
	 0x68, //  ## #
	 0x78, //  ####
	 0x1E, //    ####
	 0x16, //    # ##
	 0x16, //    # ##
	 0x7C, //  #####
	 0x10, //    #
	 0x10, //    #
	 0x00, //

	 },{/* @65 '%' (8 pixels wide) */
	 0x00, //
	 0xE2, // ###   #
	 0xA4, // # #  #
	 0xAC, // # # ##
	 0xE8, // ### #
	 0x10, //    #
	 0x3C, //   ####
	 0x34, //   ## #
	 0x54, //  # # #
	 0xDC, // ## ###
	 0x00, //
	 0x00, //
	 0x00, //

	 },{/* @78 '&' (8 pixels wide) */
	 0x00, //
	 0x38, //   ###
	 0x6C, //  ## ##
	 0x6C, //  ## ##
	 0x6C, //  ## ##
	 0x38, //   ###
	 0x7E, //  ######
	 0xCE, // ##  ###
	 0xC6, // ##   ##
	 0x7F, //  #######
	 0x00, //
	 0x00, //
	 0x00, //

	 },{/* @91 ''' (8 pixels wide) */
	 0x00, //
	 0x18, //    ##
	 0x18, //    ##
	 0x18, //    ##
	 0x00, //
	 0x00, //
	 0x00, //
	 0x00, //
	 0x00, //
	 0x00, //
	 0x00, //
	 0x00, //
	 0x00, //

	 },{/* @104 '(' (8 pixels wide) */
	 0x00, //
	 0x04, //      #
	 0x08, //     #
	 0x18, //    ##
	 0x30, //   ##
	 0x30, //   ##
	 0x30, //   ##
	 0x30, //   ##
	 0x30, //   ##
	 0x30, //   ##
	 0x18, //    ##
	 0x0C, //     ##
	 0x04, //      #

	 },{/* @117 ')' (8 pixels wide) */
	 0x00, //
	 0x40, //  #
	 0x60, //  ##
	 0x30, //   ##
	 0x18, //    ##
	 0x18, //    ##
	 0x18, //    ##
	 0x18, //    ##
	 0x18, //    ##
	 0x18, //    ##
	 0x30, //   ##
	 0x20, //   #
	 0x40, //  #

	 },{/* @130 '*' (8 pixels wide) */
	 0x00, //
	 0x18, //    ##
	 0x7E, //  ######
	 0x18, //    ##
	 0x7E, //  ######
	 0x18, //    ##
	 0x00, //
	 0x00, //
	 0x00, //
	 0x00, //
	 0x00, //
	 0x00, //
	 0x00, //

	 },{/* @143 '+' (8 pixels wide) */
	 0x00, //
	 0x00, //
	 0x00, //
	 0x00, //
	 0x18, //    ##
	 0x18, //    ##
	 0x7E, //  ######
	 0x18, //    ##
	 0x18, //    ##
	 0x00, //
	 0x00, //
	 0x00, //
	 0x00, //

	 },{/* @156 ',' (8 pixels wide) */
	 0x00, //
	 0x00, //
	 0x00, //
	 0x00, //
	 0x00, //
	 0x00, //
	 0x00, //
	 0x30, //   ##
	 0x30, //   ##
	 0x10, //    #
	 0x10, //    #
	 0x60, //  ##
	 0x00, //

	 },{/* @169 '-' (8 pixels wide) */
	 0x00, //
	 0x00, //
	 0x00, //
	 0x00, //
	 0x00, //
	 0x00, //
	 0x3C, //   ####
	 0x00, //
	 0x00, //
	 0x00, //
	 0x00, //
	 0x00, //
	 0x00, //

	 },{/* @182 '.' (8 pixels wide) */
	 0x00, //
	 0x00, //
	 0x00, //
	 0x00, //
	 0x00, //
	 0x00, //
	 0x00, //
	 0x00, //
	 0x30, //   ##
	 0x30, //   ##
	 0x00, //
	 0x00, //
	 0x00, //

	 },{/* @195 '/' (8 pixels wide) */
	 0x00, //
	 0x08, //     #
	 0x18, //    ##
	 0x18, //    ##
	 0x10, //    #
	 0x30, //   ##
	 0x20, //   #
	 0x60, //  ##
	 0x60, //  ##
	 0x40, //  #
	 0xC0, // ##
	 0x00, //
	 0x00, //

	 },{/* @208 '0' (8 pixels wide) */
	 0x00, //
	 0x00, //
	 0x3C, //   ####
	 0x6C, //  ## ##
	 0xCE, // ##  ###
	 0xDE, // ## ####
	 0xF6, // #### ##
	 0xE6, // ###  ##
	 0x6C, //  ## ##
	 0x78, //  ####
	 0x00, //
	 0x00, //
	 0x00, //

	 },{/* @221 '1' (8 pixels wide) */
	 0x00, //
	 0x00, //
	 0x18, //    ##
	 0x38, //   ###
	 0x58, //  # ##
	 0x18, //    ##
	 0x18, //    ##
	 0x18, //    ##
	 0x18, //    ##
	 0x7E, //  ######
	 0x00, //
	 0x00, //
	 0x00, //

	 },{/* @234 '2' (8 pixels wide) */
	 0x00, //
	 0x00, //
	 0x3C, //   ####
	 0x46, //  #   ##
	 0x06, //      ##
	 0x06, //      ##
	 0x0C, //     ##
	 0x18, //    ##
	 0x30, //   ##
	 0x7E, //  ######
	 0x00, //
	 0x00, //
	 0x00, //

	 },{/* @247 '3' (8 pixels wide) */
	 0x00, //
	 0x00, //
	 0x7C, //  #####
	 0x06, //      ##
	 0x06, //      ##
	 0x3C, //   ####
	 0x06, //      ##
	 0x06, //      ##
	 0x06, //      ##
	 0x7C, //  #####
	 0x00, //
	 0x00, //
	 0x00, //

	 },{/* @260 '4' (8 pixels wide) */
	 0x00, //
	 0x00, //
	 0x1C, //    ###
	 0x3C, //   ####
	 0x2C, //   # ##
	 0x6C, //  ## ##
	 0xCC, // ##  ##
	 0xFE, // #######
	 0x0C, //     ##
	 0x0C, //     ##
	 0x00, //
	 0x00, //
	 0x00, //

	 },{/* @273 '5' (8 pixels wide) */
	 0x00, //
	 0x00, //
	 0x7C, //  #####
	 0x60, //  ##
	 0x60, //  ##
	 0x7C, //  #####
	 0x06, //      ##
	 0x06, //      ##
	 0x06, //      ##
	 0x78, //  ####
	 0x00, //
	 0x00, //
	 0x00, //

	 },{/* @286 '6' (8 pixels wide) */
	 0x00, //
	 0x00, //
	 0x1C, //    ###
	 0x30, //   ##
	 0x60, //  ##
	 0x7C, //  #####
	 0x66, //  ##  ##
	 0x66, //  ##  ##
	 0x66, //  ##  ##
	 0x3C, //   ####
	 0x00, //
	 0x00, //
	 0x00, //

	 },{/* @299 '7' (8 pixels wide) */
	 0x00, //
	 0x00, //
	 0x7E, //  ######
	 0x06, //      ##
	 0x0C, //     ##
	 0x0C, //     ##
	 0x18, //    ##
	 0x10, //    #
	 0x30, //   ##
	 0x20, //   #
	 0x00, //
	 0x00, //
	 0x00, //

	 },{/* @312 '8' (8 pixels wide) */
	 0x00, //
	 0x00, //
	 0x3C, //   ####
	 0x66, //  ##  ##
	 0x66, //  ##  ##
	 0x3C, //   ####
	 0x3E, //   #####
	 0x66, //  ##  ##
	 0x66, //  ##  ##
	 0x3C, //   ####
	 0x00, //
	 0x00, //
	 0x00, //

	 },{/* @325 '9' (8 pixels wide) */
	 0x00, //
	 0x00, //
	 0x78, //  ####
	 0xCC, // ##  ##
	 0xCC, // ##  ##
	 0xCC, // ##  ##
	 0x7C, //  #####
	 0x0C, //     ##
	 0x18, //    ##
	 0x70, //  ###
	 0x00, //
	 0x00, //
	 0x00, //

	 },{/* @338 ':' (8 pixels wide) */
	 0x00, //
	 0x00, //
	 0x00, //
	 0x00, //
	 0x30, //   ##
	 0x30, //   ##
	 0x00, //
	 0x00, //
	 0x30, //   ##
	 0x30, //   ##
	 0x00, //
	 0x00, //
	 0x00, //

	 },{/* @351 ';' (8 pixels wide) */
	 0x00, //
	 0x00, //
	 0x00, //
	 0x00, //
	 0x18, //    ##
	 0x18, //    ##
	 0x00, //
	 0x18, //    ##
	 0x18, //    ##
	 0x08, //     #
	 0x08, //     #
	 0x30, //   ##
	 0x00, //

	 },{/* @364 '<' (8 pixels wide) */
	 0x00, //
	 0x00, //
	 0x00, //
	 0x0C, //     ##
	 0x18, //    ##
	 0x30, //   ##
	 0x60, //  ##
	 0x30, //   ##
	 0x18, //    ##
	 0x0C, //     ##
	 0x00, //
	 0x00, //
	 0x00, //

	 },{/* @377 '=' (8 pixels wide) */
	 0x00, //
	 0x00, //
	 0x00, //
	 0x00, //
	 0x00, //
	 0x7C, //  #####
	 0x00, //
	 0x7C, //  #####
	 0x00, //
	 0x00, //
	 0x00, //
	 0x00, //
	 0x00, //

	 },{/* @390 '>' (8 pixels wide) */
	 0x00, //
	 0x00, //
	 0x00, //
	 0x60, //  ##
	 0x30, //   ##
	 0x18, //    ##
	 0x0C, //     ##
	 0x18, //    ##
	 0x30, //   ##
	 0x60, //  ##
	 0x00, //
	 0x00, //
	 0x00, //

	 },{/* @403 '?' (8 pixels wide) */
	 0x00, //
	 0x38, //   ###
	 0x0E, //     ###
	 0x06, //      ##
	 0x06, //      ##
	 0x3C, //   ####
	 0x30, //   ##
	 0x00, //
	 0x30, //   ##
	 0x30, //   ##
	 0x00, //
	 0x00, //
	 0x00, //

	 },{/* @416 '@' (8 pixels wide) */
	 0x00, //
	 0x3C, //   ####
	 0x64, //  ##  #
	 0x42, //  #    #
	 0x7A, //  #### #
	 0xCA, // ##  # #
	 0xDA, // ## ## #
	 0xDA, // ## ## #
	 0xDA, // ## ## #
	 0xEC, // ### ##
	 0x80, // #
	 0x40, //  #
	 0x78, //  ####

	 },{/* @429 'A' (8 pixels wide) */
	 0x00, //
	 0x00, //
	 0x38, //   ###
	 0x28, //   # #
	 0x2C, //   # ##
	 0x2C, //   # ##
	 0x64, //  ##  #
	 0x7E, //  ######
	 0x46, //  #   ##
	 0x42, //  #    #
	 0x00, //
	 0x00, //
	 0x00, //

	 },{/* @442 'B' (8 pixels wide) */
	 0x00, //
	 0x00, //
	 0x7C, //  #####
	 0x66, //  ##  ##
	 0x66, //  ##  ##
	 0x7C, //  #####
	 0x66, //  ##  ##
	 0x66, //  ##  ##
	 0x66, //  ##  ##
	 0x7C, //  #####
	 0x00, //
	 0x00, //
	 0x00, //

	 },{/* @455 'C' (8 pixels wide) */
	 0x00, //
	 0x00, //
	 0x1E, //    ####
	 0x30, //   ##
	 0x60, //  ##
	 0x60, //  ##
	 0x60, //  ##
	 0x60, //  ##
	 0x30, //   ##
	 0x1E, //    ####
	 0x00, //
	 0x00, //
	 0x00, //

	 },{/* @468 'D' (8 pixels wide) */
	 0x00, //
	 0x00, //
	 0x7C, //  #####
	 0x66, //  ##  ##
	 0x63, //  ##   ##
	 0x63, //  ##   ##
	 0x63, //  ##   ##
	 0x63, //  ##   ##
	 0x66, //  ##  ##
	 0x7C, //  #####
	 0x00, //
	 0x00, //
	 0x00, //

	 },{/* @481 'E' (8 pixels wide) */
	 0x00, //
	 0x00, //
	 0x7C, //  #####
	 0x60, //  ##
	 0x60, //  ##
	 0x7C, //  #####
	 0x60, //  ##
	 0x60, //  ##
	 0x60, //  ##
	 0x7C, //  #####
	 0x00, //
	 0x00, //
	 0x00, //

	 },{/* @494 'F' (8 pixels wide) */
	 0x00, //
	 0x00, //
	 0x7C, //  #####
	 0x60, //  ##
	 0x60, //  ##
	 0x60, //  ##
	 0x7C, //  #####
	 0x60, //  ##
	 0x60, //  ##
	 0x60, //  ##
	 0x00, //
	 0x00, //
	 0x00, //

	 },{/* @507 'G' (8 pixels wide) */
	 0x00, //
	 0x00, //
	 0x3C, //   ####
	 0x62, //  ##   #
	 0xC0, // ##
	 0xC0, // ##
	 0xCE, // ##  ###
	 0xC6, // ##   ##
	 0x66, //  ##  ##
	 0x3E, //   #####
	 0x00, //
	 0x00, //
	 0x00, //

	 },{/* @520 'H' (8 pixels wide) */
	 0x00, //
	 0x00, //
	 0x66, //  ##  ##
	 0x66, //  ##  ##
	 0x66, //  ##  ##
	 0x7E, //  ######
	 0x66, //  ##  ##
	 0x66, //  ##  ##
	 0x66, //  ##  ##
	 0x66, //  ##  ##
	 0x00, //
	 0x00, //
	 0x00, //

	 },{/* @533 'I' (8 pixels wide) */
	 0x00, //
	 0x00, //
	 0x3C, //   ####
	 0x18, //    ##
	 0x18, //    ##
	 0x18, //    ##
	 0x18, //    ##
	 0x18, //    ##
	 0x18, //    ##
	 0x3C, //   ####
	 0x00, //
	 0x00, //
	 0x00, //

	 },{/* @546 'J' (8 pixels wide) */
	 0x00, //
	 0x00, //
	 0x7C, //  #####
	 0x0C, //     ##
	 0x0C, //     ##
	 0x0C, //     ##
	 0x0C, //     ##
	 0x0C, //     ##
	 0x4C, //  #  ##
	 0x38, //   ###
	 0x00, //
	 0x00, //
	 0x00, //

	 },{/* @559 'K' (8 pixels wide) */
	 0x00, //
	 0x00, //
	 0x66, //  ##  ##
	 0x6C, //  ## ##
	 0x68, //  ## #
	 0x78, //  ####
	 0x78, //  ####
	 0x68, //  ## #
	 0x6C, //  ## ##
	 0x66, //  ##  ##
	 0x00, //
	 0x00, //
	 0x00, //

	 },{/* @572 'L' (8 pixels wide) */
	 0x00, //
	 0x00, //
	 0x60, //  ##
	 0x60, //  ##
	 0x60, //  ##
	 0x60, //  ##
	 0x60, //  ##
	 0x60, //  ##
	 0x60, //  ##
	 0x7C, //  #####
	 0x00, //
	 0x00, //
	 0x00, //

	 },{/* @585 'M' (8 pixels wide) */
	 0x00, //
	 0x00, //
	 0x6C, //  ## ##
	 0x6C, //  ## ##
	 0x6C, //  ## ##
	 0x6C, //  ## ##
	 0x54, //  # # #
	 0x54, //  # # #
	 0x44, //  #   #
	 0x44, //  #   #
	 0x00, //
	 0x00, //
	 0x00, //

	 },{/* @598 'N' (8 pixels wide) */
	 0x00, //
	 0x00, //
	 0x73, //  ###  ##
	 0x73, //  ###  ##
	 0x7B, //  #### ##
	 0x6B, //  ## # ##
	 0x6B, //  ## # ##
	 0x6F, //  ## ####
	 0x67, //  ##  ###
	 0x67, //  ##  ###
	 0x00, //
	 0x00, //
	 0x00, //

	 },{/* @611 'O' (8 pixels wide) */
	 0x00, //
	 0x00, //
	 0x3C, //   ####
	 0x64, //  ##  #
	 0xC6, // ##   ##
	 0xC6, // ##   ##
	 0xC6, // ##   ##
	 0xC6, // ##   ##
	 0x6C, //  ## ##
	 0x78, //  ####
	 0x00, //
	 0x00, //
	 0x00, //

	 },{/* @624 'P' (8 pixels wide) */
	 0x00, //
	 0x00, //
	 0x7C, //  #####
	 0x66, //  ##  ##
	 0x66, //  ##  ##
	 0x66, //  ##  ##
	 0x7C, //  #####
	 0x60, //  ##
	 0x60, //  ##
	 0x60, //  ##
	 0x00, //
	 0x00, //
	 0x00, //

	 },{/* @637 'Q' (8 pixels wide) */
	 0x00, //
	 0x00, //
	 0x3C, //   ####
	 0x64, //  ##  #
	 0xC6, // ##   ##
	 0xC6, // ##   ##
	 0xC6, // ##   ##
	 0xC6, // ##   ##
	 0xEC, // ### ##
	 0x78, //  ####
	 0x18, //    ##
	 0x18, //    ##
	 0x0E, //     ###

	 },{/* @650 'R' (8 pixels wide) */
	 0x00, //
	 0x00, //
	 0x7C, //  #####
	 0x66, //  ##  ##
	 0x66, //  ##  ##
	 0x66, //  ##  ##
	 0x78, //  ####
	 0x6C, //  ## ##
	 0x6C, //  ## ##
	 0x66, //  ##  ##
	 0x00, //
	 0x00, //
	 0x00, //

	 },{/* @663 'S' (8 pixels wide) */
	 0x00, //
	 0x00, //
	 0x3C, //   ####
	 0x60, //  ##
	 0x60, //  ##
	 0x78, //  ####
	 0x1E, //    ####
	 0x06, //      ##
	 0x06, //      ##
	 0x7C, //  #####
	 0x00, //
	 0x00, //
	 0x00, //

	 },{/* @676 'T' (8 pixels wide) */
	 0x00, //
	 0x00, //
	 0x7E, //  ######
	 0x18, //    ##
	 0x18, //    ##
	 0x18, //    ##
	 0x18, //    ##
	 0x18, //    ##
	 0x18, //    ##
	 0x18, //    ##
	 0x00, //
	 0x00, //
	 0x00, //

	 },{/* @689 'U' (8 pixels wide) */
	 0x00, //
	 0x00, //
	 0x66, //  ##  ##
	 0x66, //  ##  ##
	 0x66, //  ##  ##
	 0x66, //  ##  ##
	 0x66, //  ##  ##
	 0x66, //  ##  ##
	 0x66, //  ##  ##
	 0x3C, //   ####
	 0x00, //
	 0x00, //
	 0x00, //

	 },{/* @702 'V' (8 pixels wide) */
	 0x00, //
	 0x00, //
	 0x82, // #     #
	 0xC6, // ##   ##
	 0xC6, // ##   ##
	 0x44, //  #   #
	 0x6C, //  ## ##
	 0x68, //  ## #
	 0x38, //   ###
	 0x38, //   ###
	 0x00, //
	 0x00, //
	 0x00, //

	 },{/* @715 'W' (8 pixels wide) */
	 0x00, //
	 0x00, //
	 0x44, //  #   #
	 0x44, //  #   #
	 0x54, //  # # #
	 0x54, //  # # #
	 0x6C, //  ## ##
	 0x6C, //  ## ##
	 0x6C, //  ## ##
	 0x6C, //  ## ##
	 0x00, //
	 0x00, //
	 0x00, //

	 },{/* @728 'X' (8 pixels wide) */
	 0x00, //
	 0x00, //
	 0x66, //  ##  ##
	 0x3C, //   ####
	 0x3C, //   ####
	 0x18, //    ##
	 0x1C, //    ###
	 0x2C, //   # ##
	 0x66, //  ##  ##
	 0x66, //  ##  ##
	 0x00, //
	 0x00, //
	 0x00, //

	 },{/* @741 'Y' (8 pixels wide) */
	 0x00, //
	 0x00, //
	 0xC3, // ##    ##
	 0x66, //  ##  ##
	 0x66, //  ##  ##
	 0x3C, //   ####
	 0x18, //    ##
	 0x18, //    ##
	 0x18, //    ##
	 0x18, //    ##
	 0x00, //
	 0x00, //
	 0x00, //

	 },{/* @754 'Z' (8 pixels wide) */
	 0x00, //
	 0x00, //
	 0x7E, //  ######
	 0x04, //      #
	 0x0C, //     ##
	 0x08, //     #
	 0x10, //    #
	 0x30, //   ##
	 0x20, //   #
	 0x7E, //  ######
	 0x00, //
	 0x00, //
	 0x00, //

	 },{/* @767 '[' (8 pixels wide) */
	 0x00, //
	 0x78, //  ####
	 0x60, //  ##
	 0x60, //  ##
	 0x60, //  ##
	 0x60, //  ##
	 0x60, //  ##
	 0x60, //  ##
	 0x60, //  ##
	 0x60, //  ##
	 0x60, //  ##
	 0x60, //  ##
	 0x78, //  ####

	 },{/* @780 '\' (8 pixels wide) */
	 0x00, //
	 0x60, //  ##
	 0x20, //   #
	 0x30, //   ##
	 0x10, //    #
	 0x18, //    ##
	 0x18, //    ##
	 0x08, //     #
	 0x0C, //     ##
	 0x04, //      #
	 0x06, //      ##
	 0x00, //
	 0x00, //

	 },{/* @793 ']' (8 pixels wide) */
	 0x00, //
	 0x3C, //   ####
	 0x0C, //     ##
	 0x0C, //     ##
	 0x0C, //     ##
	 0x0C, //     ##
	 0x0C, //     ##
	 0x0C, //     ##
	 0x0C, //     ##
	 0x0C, //     ##
	 0x0C, //     ##
	 0x0C, //     ##
	 0x3C, //   ####

	 },{/* @806 '^' (8 pixels wide) */
	 0x00, //
	 0x00, //
	 0x10, //    #
	 0x28, //   # #
	 0x6C, //  ## ##
	 0x6C, //  ## ##
	 0x00, //
	 0x00, //
	 0x00, //
	 0x00, //
	 0x00, //
	 0x00, //
	 0x00, //

	 },{/* @819 '_' (8 pixels wide) */
	 0x00, //
	 0x00, //
	 0x00, //
	 0x00, //
	 0x00, //
	 0x00, //
	 0x00, //
	 0x00, //
	 0x00, //
	 0x00, //
	 0x00, //
	 0x00, //
	 0xFE, // #######

	 },{/* @832 '`' (8 pixels wide) */
	 0x00, //
	 0x70, //  ###
	 0x38, //   ###
	 0x00, //
	 0x00, //
	 0x00, //
	 0x00, //
	 0x00, //
	 0x00, //
	 0x00, //
	 0x00, //
	 0x00, //
	 0x00, //

	 },{/* @845 'a' (8 pixels wide) */
	 0x00, //
	 0x00, //
	 0x00, //
	 0x00, //
	 0x3C, //   ####
	 0x06, //      ##
	 0x3E, //   #####
	 0x66, //  ##  ##
	 0x66, //  ##  ##
	 0x3E, //   #####
	 0x00, //
	 0x00, //
	 0x00, //

	 },{/* @858 'b' (8 pixels wide) */
	 0x00, //
	 0x60, //  ##
	 0x60, //  ##
	 0x60, //  ##
	 0x7C, //  #####
	 0x66, //  ##  ##
	 0x66, //  ##  ##
	 0x66, //  ##  ##
	 0x66, //  ##  ##
	 0x7C, //  #####
	 0x00, //
	 0x00, //
	 0x00, //

	 },{/* @871 'c' (8 pixels wide) */
	 0x00, //
	 0x00, //
	 0x00, //
	 0x00, //
	 0x3C, //   ####
	 0x60, //  ##
	 0x60, //  ##
	 0x60, //  ##
	 0x60, //  ##
	 0x3C, //   ####
	 0x00, //
	 0x00, //
	 0x00, //

	 },{/* @884 'd' (8 pixels wide) */
	 0x00, //
	 0x0C, //     ##
	 0x0C, //     ##
	 0x0C, //     ##
	 0x7C, //  #####
	 0xCC, // ##  ##
	 0xCC, // ##  ##
	 0xCC, // ##  ##
	 0xCC, // ##  ##
	 0x7C, //  #####
	 0x00, //
	 0x00, //
	 0x00, //

	 },{/* @897 'e' (8 pixels wide) */
	 0x00, //
	 0x00, //
	 0x00, //
	 0x00, //
	 0x3C, //   ####
	 0x66, //  ##  ##
	 0x7E, //  ######
	 0x60, //  ##
	 0x70, //  ###
	 0x3E, //   #####
	 0x00, //
	 0x00, //
	 0x00, //

	 },{/* @910 'f' (8 pixels wide) */
	 0x00, //
	 0x1C, //    ###
	 0x30, //   ##
	 0x30, //   ##
	 0x30, //   ##
	 0x78, //  ####
	 0x30, //   ##
	 0x30, //   ##
	 0x30, //   ##
	 0x30, //   ##
	 0x00, //
	 0x00, //
	 0x00, //

	 },{/* @923 'g' (8 pixels wide) */
	 0x00, //
	 0x00, //
	 0x00, //
	 0x00, //
	 0x7E, //  ######
	 0xCC, // ##  ##
	 0xCC, // ##  ##
	 0xF8, // #####
	 0xC0, // ##
	 0xFC, // ######
	 0xC6, // ##   ##
	 0xC6, // ##   ##
	 0x7C, //  #####

	 },{/* @936 'h' (8 pixels wide) */
	 0x00, //
	 0x60, //  ##
	 0x60, //  ##
	 0x60, //  ##
	 0x7C, //  #####
	 0x66, //  ##  ##
	 0x66, //  ##  ##
	 0x66, //  ##  ##
	 0x66, //  ##  ##
	 0x66, //  ##  ##
	 0x00, //
	 0x00, //
	 0x00, //

	 },{/* @949 'i' (8 pixels wide) */
	 0x00, //
	 0x18, //    ##
	 0x18, //    ##
	 0x00, //
	 0x78, //  ####
	 0x18, //    ##
	 0x18, //    ##
	 0x18, //    ##
	 0x18, //    ##
	 0x7C, //  #####
	 0x00, //
	 0x00, //
	 0x00, //

	 },{/* @962 'j' (8 pixels wide) */
	 0x00, //
	 0x0C, //     ##
	 0x0C, //     ##
	 0x00, //
	 0x7C, //  #####
	 0x0C, //     ##
	 0x0C, //     ##
	 0x0C, //     ##
	 0x0C, //     ##
	 0x0C, //     ##
	 0x0C, //     ##
	 0x4C, //  #  ##
	 0x38, //   ###

	 },{/* @975 'k' (8 pixels wide) */
	 0x00, //
	 0x60, //  ##
	 0x60, //  ##
	 0x60, //  ##
	 0x66, //  ##  ##
	 0x6C, //  ## ##
	 0x78, //  ####
	 0x7C, //  #####
	 0x6C, //  ## ##
	 0x66, //  ##  ##
	 0x00, //
	 0x00, //
	 0x00, //

	 },{/* @988 'l' (8 pixels wide) */
	 0x00, //
	 0x78, //  ####
	 0x18, //    ##
	 0x18, //    ##
	 0x18, //    ##
	 0x18, //    ##
	 0x18, //    ##
	 0x18, //    ##
	 0x18, //    ##
	 0x7C, //  #####
	 0x00, //
	 0x00, //
	 0x00, //

	 },{/* @1001 'm' (8 pixels wide) */
	 0x00, //
	 0x00, //
	 0x00, //
	 0x00, //
	 0xFF, // ########
	 0xDB, // ## ## ##
	 0xDB, // ## ## ##
	 0xDB, // ## ## ##
	 0xDB, // ## ## ##
	 0xDB, // ## ## ##
	 0x00, //
	 0x00, //
	 0x00, //

	 },{/* @1014 'n' (8 pixels wide) */
	 0x00, //
	 0x00, //
	 0x00, //
	 0x00, //
	 0x7C, //  #####
	 0x66, //  ##  ##
	 0x66, //  ##  ##
	 0x66, //  ##  ##
	 0x66, //  ##  ##
	 0x66, //  ##  ##
	 0x00, //
	 0x00, //
	 0x00, //

	 },{/* @1027 'o' (8 pixels wide) */
	 0x00, //
	 0x00, //
	 0x00, //
	 0x00, //
	 0x7C, //  #####
	 0xC6, // ##   ##
	 0xC6, // ##   ##
	 0xC6, // ##   ##
	 0xC6, // ##   ##
	 0x7C, //  #####
	 0x00, //
	 0x00, //
	 0x00, //

	 },{/* @1040 'p' (8 pixels wide) */
	 0x00, //
	 0x00, //
	 0x00, //
	 0x00, //
	 0x7C, //  #####
	 0x66, //  ##  ##
	 0x66, //  ##  ##
	 0x66, //  ##  ##
	 0x66, //  ##  ##
	 0x7C, //  #####
	 0x60, //  ##
	 0x60, //  ##
	 0x60, //  ##

	 },{/* @1053 'q' (8 pixels wide) */
	 0x00, //
	 0x00, //
	 0x00, //
	 0x00, //
	 0x7C, //  #####
	 0xCC, // ##  ##
	 0xCC, // ##  ##
	 0xCC, // ##  ##
	 0xCC, // ##  ##
	 0x7C, //  #####
	 0x0C, //     ##
	 0x0C, //     ##
	 0x0C, //     ##

	 },{/* @1066 'r' (8 pixels wide) */
	 0x00, //
	 0x00, //
	 0x00, //
	 0x00, //
	 0x6E, //  ## ###
	 0x76, //  ### ##
	 0x60, //  ##
	 0x60, //  ##
	 0x60, //  ##
	 0x60, //  ##
	 0x00, //
	 0x00, //
	 0x00, //

	 },{/* @1079 's' (8 pixels wide) */
	 0x00, //
	 0x00, //
	 0x00, //
	 0x00, //
	 0x3C, //   ####
	 0x60, //  ##
	 0x78, //  ####
	 0x1E, //    ####
	 0x06, //      ##
	 0x7C, //  #####
	 0x00, //
	 0x00, //
	 0x00, //

	 },{/* @1092 't' (8 pixels wide) */
	 0x00, //
	 0x00, //
	 0x30, //   ##
	 0x30, //   ##
	 0xFC, // ######
	 0x30, //   ##
	 0x30, //   ##
	 0x30, //   ##
	 0x30, //   ##
	 0x1C, //    ###
	 0x00, //
	 0x00, //
	 0x00, //

	 },{/* @1105 'u' (8 pixels wide) */
	 0x00, //
	 0x00, //
	 0x00, //
	 0x00, //
	 0x66, //  ##  ##
	 0x66, //  ##  ##
	 0x66, //  ##  ##
	 0x66, //  ##  ##
	 0x66, //  ##  ##
	 0x3E, //   #####
	 0x00, //
	 0x00, //
	 0x00, //

	 },{/* @1118 'v' (8 pixels wide) */
	 0x00, //
	 0x00, //
	 0x00, //
	 0x00, //
	 0x44, //  #   #
	 0x6C, //  ## ##
	 0x6C, //  ## ##
	 0x28, //   # #
	 0x28, //   # #
	 0x38, //   ###
	 0x00, //
	 0x00, //
	 0x00, //

	 },{/* @1131 'w' (8 pixels wide) */
	 0x00, //
	 0x00, //
	 0x00, //
	 0x00, //
	 0x82, // #     #
	 0x82, // #     #
	 0x92, // #  #  #
	 0xEE, // ### ###
	 0x6C, //  ## ##
	 0x6C, //  ## ##
	 0x00, //
	 0x00, //
	 0x00, //

	 },{/* @1144 'x' (8 pixels wide) */
	 0x00, //
	 0x00, //
	 0x00, //
	 0x00, //
	 0x66, //  ##  ##
	 0x3C, //   ####
	 0x18, //    ##
	 0x28, //   # #
	 0x2C, //   # ##
	 0x66, //  ##  ##
	 0x00, //
	 0x00, //
	 0x00, //

	 },{/* @1157 'y' (8 pixels wide) */
	 0x00, //
	 0x00, //
	 0x00, //
	 0x00, //
	 0x44, //  #   #
	 0x6C, //  ## ##
	 0x6C, //  ## ##
	 0x28, //   # #
	 0x38, //   ###
	 0x30, //   ##
	 0x30, //   ##
	 0x30, //   ##
	 0xE0, // ###

	 },{/* @1170 'z' (8 pixels wide) */
	 0x00, //
	 0x00, //
	 0x00, //
	 0x00, //
	 0x7C, //  #####
	 0x08, //     #
	 0x18, //    ##
	 0x30, //   ##
	 0x20, //   #
	 0x7C, //  #####
	 0x00, //
	 0x00, //
	 0x00, //

	 },{/* @1183 '{' (8 pixels wide) */
	 0x00, //
	 0x1C, //    ###
	 0x30, //   ##
	 0x30, //   ##
	 0x30, //   ##
	 0x30, //   ##
	 0xE0, // ###
	 0x30, //   ##
	 0x30, //   ##
	 0x30, //   ##
	 0x30, //   ##
	 0x30, //   ##
	 0x1C, //    ###

	 },{/* @1196 '|' (8 pixels wide) */
	 0x18, //    ##
	 0x18, //    ##
	 0x18, //    ##
	 0x18, //    ##
	 0x18, //    ##
	 0x18, //    ##
	 0x18, //    ##
	 0x18, //    ##
	 0x18, //    ##
	 0x18, //    ##
	 0x18, //    ##
	 0x18, //    ##
	 0x18, //    ##

	 },{/* @1209 '}' (8 pixels wide) */
	 0x00, //
	 0x70, //  ###
	 0x18, //    ##
	 0x18, //    ##
	 0x18, //    ##
	 0x18, //    ##
	 0x0E, //     ###
	 0x18, //    ##
	 0x18, //    ##
	 0x18, //    ##
	 0x18, //    ##
	 0x18, //    ##
	 0x70, //  ###

	 },{/* @1222 '~' (8 pixels wide) */
	 0x00, //
	 0x00, //
	 0x00, //
	 0x00, //
	 0x00, //
	 0x72, //  ###  #
	 0xBA, // # ### #
	 0x9C, // #  ###
	 0x00, //
	 0x00, //
	 0x00, //
	 0x00, //
	 0x00, //
   }};

#define FONT_CHAR(chr) kernel_default_font[chr - ' ']

#endif /* SRC_TERMINAL_TERMINAL_FONT_H_ */
