//
// Created by Shawn15619 on 14/07/2017.
//

#ifndef QUEUE_H
#define QUEUE_H

#include <stdlib.h>
#include "list.h"

/* implement queues as lists */
typedef List Queue;

/* public interface */

#define queue_init list_init
#define queue_destroy list_destroy

int queue_enqueue(Queue *queue, const void *data);

int queue_dequeue(Queue *queue, void **data);

#define queue_peak(queue) ((queue)->head == NULL? NULL: (queue)->head->data)

#define queue_size list_size

#endif //QUEUE_H
