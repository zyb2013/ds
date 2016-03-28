/*
 * 	SeqList.c
 *	线性表
 *  Created on: 2016年3月23日
 *      Author: zhuyuanbiao
 */

#include "../list/SeqList.h"

#include <stdlib.h>
#include <string.h>

List *createList(uint capacity)
{
	if (capacity <= 0)
	{
		return NULL;
	}
	List *list = (List *) malloc(sizeof(List));
	list->capacity = capacity;
	list->size = 0;
	list->data = malloc(sizeof(ElemType) * capacity);
	return list;
}

uint size(List *list)
{
	if (list == NULL)
	{
		return 0;
	}
	return list->size;
}

void *get(List *list, uint pos)
{
	if (list == NULL)
	{
		return NULL;
	}
	if (pos > list->size - 1)
	{
		pos = list->size - 1;
	}
	return list->data[pos];
}

boolean isEmpty(List *list)
{
	if (list == NULL)
	{
		return TRUE;
	}
	if (list->size == 0)
	{
		return TRUE;
	}
	return FALSE;
}

void expandCapacity(List *list)
{
	int newSize = list->capacity * 2;
	list->data = realloc(list->data, newSize * sizeof(ElemType));
	list->capacity += newSize;
}

boolean isFull(List *list)
{
	if (list->size >= list->capacity)
	{
		return TRUE;
	}
	return FALSE;
}

boolean add(List *list, uint index, ElemType *data)
{
	int i = 0;
	if (index < 0 || list == NULL || data == NULL)
	{
		return FALSE;
	}
	if (isFull(list))
	{
		expandCapacity(list);
	}
	if (index > list->size)
	{
		index = list->size;
	}
	for (i = list->size; i > index; i--)
	{
		list->data[i] = list->data[i - 1];
	}
	list->data[index] = *data;
	list->size++;
	return TRUE;
}

boolean removeList(List *list, uint index)
{
	int i = 0;
	if (list == NULL)
	{
		return FALSE;
	}
	if (index >= list->size - 1)
	{
		return FALSE;
	}
	for (i = index; i < list->size; i++)
	{
		list->data[i] = list->data[i + 1];
	}
	list->size--;
	return TRUE;
}

boolean clear(List *list)
{
	return TRUE;
}

boolean destroyList(List *list)
{
	if (list == NULL)
	{
		return FALSE;
	}
	free(list->data);
	free(list);
	return TRUE;
}
