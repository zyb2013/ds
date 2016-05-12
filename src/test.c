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

void digital_convert()
{
	int val = 100;
	Stack *s = stackCreate();
	while (val > 0)
	{
		int *remainder = (int *) malloc(sizeof(int));
		*remainder = val % 2;
		stackPush(s, remainder);
		val /= 2;
	}
	while (!stackIsEmpty(s))
	{
		printf("%d", *(int *) stackPop(s));
	}
}

void testStack()
{
	int a = 10, b = 20, c = 30;
	Stack *s = stackCreate();
	stackPush(s, &a);
	stackPush(s, &b);
	stackPush(s, &c);
	printf("size:%d\n", stackSize(s));
	printf("peek:%d\n", *(int *) stackPeek(s));
	while (!stackIsEmpty(s))
	{
		printf("%d ", *(int *) stackPop(s));
	}
	printf("\n");
	digital_convert();
}
