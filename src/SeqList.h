#ifndef _SEQ_LIST_H
#define _SEQ_LIST_H

typedef unsigned int uint;

typedef char boolean;

#define TRUE 1

#define FALSE 0

typedef struct List
{
	// 线性表大小
	uint size;
	// 线性表容量
	uint capacity;
	// 数据
	void *data;
} List;

/**
 * 创建线性表
 */
List *createList(uint capacity);

/**
 * 获取线性表的大小
 */
uint size(List *list);

void *get(List *list, uint pos);

/**
 * 线性表是否为空
 */
boolean isEmpty(List *list);

/**
 * 在线性表的指定位置添加数据
 */
boolean add(List *list, uint pos, void *data);

/**
 * 在线性表的指定位置删除元素
 */
boolean removeList(List *list, uint pos);

/**
 * 清空线性表
 */
boolean clear(List *list);

/**
 * 销毁线性表
 */
boolean destroyList(List *list);

#endif
