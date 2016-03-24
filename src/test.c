/*
 * test.c
 *
 *  Created on: 2016Äê3ÔÂ24ÈÕ
 *      Author: zhuyuanbiao
 */

#include <stdlib.h>
#include <stdio.h>

#include "test.h"

void testSeqList()
{
	int i;
	int a = 10;
	int b = 20;
	int c = 30;
	int d = 40;
	List *list = createList(10);
	add(list, 0, &a);
	add(list, 0, &b);
	add(list, 0, &c);
	add(list, 2, &d);

	for (i = 0; i < size(list); i++)
	{
		printf("%d ", ((int *) get(list, i)));
	}

	removeList(list, 2);
	printf("\n------------------------------\n");

	for (i = 0; i < size(list); i++)
	{
		printf("%d ", ((int *) get(list, i)));
	}
	destroyList(list);
}
