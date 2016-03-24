#ifndef _SEQ_LIST_H
#define _SEQ_LIST_H

typedef unsigned int uint;

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
	void *data;
} List;

/**
 * �������Ա�
 */
List *createList(uint capacity);

/**
 * ��ȡ���Ա�Ĵ�С
 */
uint size(List *list);

void *get(List *list, uint pos);

/**
 * ���Ա��Ƿ�Ϊ��
 */
boolean isEmpty(List *list);

/**
 * �����Ա��ָ��λ���������
 */
boolean add(List *list, uint pos, void *data);

/**
 * �����Ա��ָ��λ��ɾ��Ԫ��
 */
boolean removeList(List *list, uint pos);

/**
 * ������Ա�
 */
boolean clear(List *list);

/**
 * �������Ա�
 */
boolean destroyList(List *list);

#endif
