//
// Created by Shawn15619 on 14/07/2017.
//

#include <stdlib.h>
#include <stdio.h>

#include "queue.h"

void destroy_queue_data(void *data) {
    char *value = (char *)data;
    printf("removed:\t%s\n", value);
    return;
}

int main() {
    Queue *queue;
    queue_init(queue, destroy_queue_data);
    char *p1 = "abc";
    char *p2 = "def";
    char *p3 = "xyz";
    queue_enqueue(queue, p1);
    queue_enqueue(queue, p2);
    queue_enqueue(queue, p3);
    while (queue_size(queue) > 1) {
        printf("queue size:\t%d\ndata:\t%s\n", queue_size(queue), queue_peak(queue));
        queue_dequeue(queue, (void **)&(queue->tail));
    }
    queue_destroy(queue);
    return 0;
}