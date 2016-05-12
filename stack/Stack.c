#include <stdlib.h>

#include "Stack.h"

Stack *stackCreate()
{
	Stack *s = (Stack *) malloc(sizeof(Stack));
	s->head = NULL;
	s->size = 0;
	return s;
}

int stackPush(Stack *s, void *data)
{
	StackNode *node = (StackNode *) malloc(sizeof(StackNode));
	if (node == NULL)
	{
		return 0;
	}
	node->data = data;
	node->next = NULL;
	if (stackIsEmpty(s))
	{
		s->head = node;
	}
	else
	{
		node->next = s->head;
		s->head = node;
	}
	s->size++;
	return 1;
}

void *stackPop(Stack *s)
{
	int data;
	if (stackIsEmpty(s))
	{
		return NULL;
	}
	StackNode *oldHead = s->head;
	s->head = oldHead->next;
	data = oldHead->data;
	free(oldHead);
	s->size--;
	return data;
}

void *stackPeek(Stack *s)
{
	if (stackIsEmpty(s))
	{
		return NULL;
	}
	return s->head->data;
}

int stackSize(Stack *s)
{
	return s->size;
}

int stackIsEmpty(Stack *s)
{
	return s->size == 0;
}

int stackRelease(Stack *s)
{
	return 1;
}
