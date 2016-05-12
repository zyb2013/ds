#include <stdlib.h>

#include "Stack.h"

Stack *createStack()
{
	Stack *s = (Stack *) malloc(sizeof(Stack));
	s->head = NULL;
	s->size = 0;
	return s;
}

int stack_push(Stack *s, void *data)
{
	Stack_Node *node = (Stack_Node *) malloc(sizeof(Stack_Node));
	if (node == NULL)
	{
		return 0;
	}
	node->data = data;
	node->next = NULL;
	if (stack_is_empty(s))
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

void *stack_pop(Stack *s)
{
	int data;
	if (stack_is_empty(s))
	{
		return NULL;
	}
	Stack_Node *oldHead = s->head;
	s->head = oldHead->next;
	data = oldHead->data;
	free(oldHead);
	s->size--;
	return data;
}

void *stack_peek(Stack *s)
{
	if (stack_is_empty(s))
	{
		return NULL;
	}
	return s->head->data;
}

int stack_size(Stack *s)
{
	return s->size;
}

int stack_is_empty(Stack *s)
{
	return s->size == 0;
}
