
#include <stdlib.h>
#include <string.h>

#include "priority_queue.h"

priority_queue* priority_queue_create()
{
	priority_queue* queue = (priority_queue*) malloc(sizeof(priority_queue));
	queue->size = 0;
	queue->capacity = DEFAULT_INITIAL_CAPACITY;
	queue->elems = (ElemType*) malloc(sizeof(ElemType) * queue->capacity);
	return queue;
}

int priority_queue_add(priority_queue *queue, ElemType e)
{
	return 0;
}
