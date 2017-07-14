//
// Created by Shawn15619 on 14/07/2017.
//

#include <stdio.h>
#include <string.h>
#include "list.h"


void destroy_int_data(void *data) {
    char *value = (char *)data;
    printf("destroyed value:\t%s\n", value);
    return ;
}

int main() {
    List *list;
    list_init(list, destroy_int_data);
    printf("size:\t%d\n", list_size(list));
    char *p1 = "abc";
    char *p2 = "def";
    list_ins_next(list, NULL, p1);
    list_ins_next(list, list->tail, p2);
    printf("now the size:\t%d\n", list_size(list));
    list_destroy(list);
    printf("now the size:\t%d\n", list_size(list));
    return 0;
}