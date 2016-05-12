#ifndef _STACK_H_
#define _STACK_H_

typedef struct _Node
{
	void *data;
	struct _Node *next;
} Stack_Node;

typedef struct _Stack
{
	Stack_Node *head;
	int size;
} Stack;

Stack *createStack();

int stack_push(Stack *s, void *data);

void *stack_pop(Stack *s);

void *stack_peek(Stack *s);

int stack_size(Stack *s);

int stack_is_empty(Stack *s);

#endif
