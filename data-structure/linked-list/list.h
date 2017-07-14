#ifndef LIST_H
#define LIST_H

#include <stdlib.h>

/* define a structure for linked list elements */
typedef struct ListElmt_ {
	void *data;
	struct ListElmt_ *next;
} ListElmt;

/* define a structure for linked lists */
typedef struct List_ {
	int size;
	int (* match)(const void *key1, const void *key2);
	void (* destroy)(void *data);
	ListElmt *head;
	ListElmt *tail;
} List;

/* public interfase */

void list_init(List *list, void (* destroy)(void *data));
void list_destroy(List *list);
int list_ins_next(List *list, ListElmt *element, const void *data);
int list_rem_next(List *list, ListElmt *element, void **data);
#define list_size(list) ((list)->size)

#define list_head(list) ((list)->head)
#define list_tail(list) ((list)->tail)
#define list_is_head(list, element) ((element) == (list)->head? 1: 0)
#define list_is_tail(element) ((element)->next == NULL? 1: 0)
#define list_data(element) ((element)->data)
#define list_next(element) ((element)->next)

#endif

// list init
// void init(List *list, void (* destroy)(void *data));
// // list destory
// void list_destroy(List *list);
// // list insert next
// // return 0 if successfully insert, else return -1
// int list_ins_next(List *list, ListElmt *element, const void *data);
// // list remove next
// // return 0 if successfully remove, else return -1
// int list_rem_next(List *list, ListElmt *element, void **data);
// // list size
// int list_size(const List *list);
// // list head
// ListElmt *list_head(const List *list);
// // list tail
// ListElmt *list_tail(const List *list);
// // list is head
// // return 1 if is head, else return -1
// int list_is_head(const ListElmt *element);
// // list is tail
// // return 1 if is tail, else return -1
// int list_is_tail(const ListElmt *element);
// // list data
// void *(const ListElmt *element);
// // list next
// ListElmt *list_next(const ListElmt *element);
