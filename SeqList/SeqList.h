#ifndef _SEQ_LIST_H
#define _SEQ_LIST_H

typedef unsigned int uint;

typedef int ElemType;

typedef char boolean;

#define TRUE 1

#define FALSE 0

typedef struct List
{
	// ���Ա��С
	uint size;
	// ���Ա�����
	uint capacity;
	// ����
	ElemType *data;
} List;

/**
 * �������Ա�
 */
List *createList(uint capacity);

/**
 * ��ȡ���Ա�Ĵ�С
 */
uint size(List *list);

void *get(List *list, uint index);

/**
 * ���Ա��Ƿ�Ϊ��
 */
boolean isEmpty(List *list);

/**
 * �����Ա��ָ��λ���������
 */
boolean add(List *list, uint index, ElemType *data);

/**
 * �����Ա��ָ��λ��ɾ��Ԫ��
 */
boolean removeList(List *list, uint index);

/**
 * ������Ա�
 */
boolean clear(List *list);

/**
 * �������Ա�
 */
boolean destroyList(List *list);

/**
 * ���Ա��Ƿ�����
 */
static boolean isFull(List *list);

/**
 * ��������
 */
static void expandCapacity(List *list);

#endif
