//
// Created by Shawn15619 on 14/07/2017.
//

#include <stdlib.h>
#include <stdio.h>
#include "stack.h"

void destroy_stack_data(void *data) {
    char *value = (char *)data;
    printf("deleted data:\t%s\n", value);
    return;
}

int main() {
    Stack *stack;
    stack_init(stack, destroy_stack_data);
    char *p1 = "abc";
    char *p2 = "def";
    char *p3 = "123";
    stack_push(stack, p1);
    stack_push(stack, p2);
    printf("stack size:\t%d\n", stack_size(stack));
    printf("top of the stack:\t%s\n", stack_peak(stack));
    stack_pop(stack, stack->head);
    printf("top of the stack:\t%s\n", stack_peak(stack));
    printf("stack size:\t%d\n", stack_size(stack));
    stack_push(stack, p3);
    printf("stack size:\t%d\n", stack_size(stack));
    stack_destroy(stack);
    printf("stack size:\t%d\n", stack_size(stack));
    return 0;
}