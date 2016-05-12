/*
 * test.c
 *
 *  Created on: 2016Äê3ÔÂ24ÈÕ
 *      Author: zhuyuanbiao
 */

#include <stdlib.h>
#include <stdio.h>

#include "test.h"

void addData(List* list)
{
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		add(list, 0, &i);
	}
}

void testSeqList()
{
	int i;
	List *list = createList(10);
	addData(list);

//	printf("capacity:%d\n", list->capacity);
//	printf("size:%d\n", list->size);
//
//	for (i = 1; i <= 15; i++)
//	{
//		add(list, 0, &i);
//	}
//
//	printf("capacity:%d\n", list->capacity);
//	printf("size:%d\n", list->size);
//
	for (i = 0; i < size(list); i++)
	{
		printf("%d ", ((int *) get(list, i)));
	}
//
//	removeList(list, 2);
//	printf("\n------------------------------\n");
//
//	for (i = 0; i < size(list); i++)
//	{
//		printf("%d ", ((int *) get(list, i)));
//	}
//	printf("\n");
//	printf("capacity:%d\n", list->capacity);
//	printf("size:%d\n", list->size);
	destroyList(list);
}

void testPriorityQueue()
{
	//priority_queue* queue = priority_queue_create();
}

void testStack()
{
	int a = 10, b = 20, c = 30;
	Stack *s = createStack();
	stack_push(s, &a);
	stack_push(s, &b);
	stack_push(s, &c);
	printf("size:%d\n", stack_size(s));
	printf("peek:%d\n", *(int *) stack_peek(s));
	while (!stack_is_empty(s))
	{
		printf("%d ", *(int *) stack_pop(s));
	}
}
