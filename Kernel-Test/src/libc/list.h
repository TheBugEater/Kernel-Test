#pragma once
#include <stdint.h>
#include <attr.h>

typedef struct node {
	struct node * next;
	struct node * prev;
	void * value;
	void * owner;
} node_t __packed;

typedef struct {
	node_t * head;
	node_t * tail;
	size_t length;
} list_t __packed;

void list_destroy(list_t * list);
void list_free(list_t * list);
void list_append(list_t * list, node_t * item);
node_t * list_insert(list_t * list, void * item);
list_t * list_create(void);
node_t * list_find(list_t * list, void * value);
int list_index_of(list_t * list, void * value);
void list_remove(list_t * list, size_t index);
void list_delete(list_t * list, node_t * node);
node_t * list_pop(list_t * list);
node_t * list_dequeue(list_t * list);
list_t * list_copy(list_t * original);
void list_merge(list_t * target, list_t * source);

void list_append_after(list_t * list, node_t * before, node_t * node);
node_t * list_insert_after(list_t * list, node_t * before, void * item);

void list_append_before(list_t * list, node_t * after, node_t * node);
node_t * list_insert_before(list_t * list, node_t * after, void * item);

#define foreach(i, list) for (node_t * i = (list)->head; i != 0; i = i->next)
#define foreachr(i, list) for (node_t * i = (list)->tail; i != 0; i = i->prev)