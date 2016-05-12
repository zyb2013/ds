/*
 * priority_queue.h
 *
 *  Created on: 2016Äê3ÔÂ28ÈÕ
 *      Author: zhuyuanbiao
 */

#ifndef QUEUE_PRIORITY_QUEUE_H_
#define QUEUE_PRIORITY_QUEUE_H_

#include "../common/common.h"

typedef struct
{
	int size;
	int capacity;
	ElemType* elems;
} priority_queue;

priority_queue* priority_queue_create();

int priority_queue_add(priority_queue *queue, ElemType e);

#endif /* QUEUE_PRIORITY_QUEUE_H_ */
