#ifndef STACK_H
#define STACK_H

#include <stdlib.h>
#include "list.h"

/* implement stack as a linked list*/
typedef List Stack;

/* public interface */
#define stack_init list_init
#define stack_destroy list_destroy

int stack_push(Stack *stack, const void *data);
int stack_pop(Stack *stack, void **data);
#define stack_peak(stack) ((stack->head) == NULL? NULL: (stack)->head->data)

#define stack_size list_size

#endif