#ifndef _STACK_H_
#define _STACK_H_

typedef struct _Node
{
	void *data;
	struct _Node *next;
} StackNode;

typedef struct _Stack
{
	StackNode *head;
	int size;
} Stack;

Stack *stackCreate();

int stackPush(Stack *s, void *data);

void *stackPop(Stack *s);

void *stackPeek(Stack *s);

int stackSize(Stack *s);

int stackIsEmpty(Stack *s);

int stackRelease(Stack *s);

#endif
