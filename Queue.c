#define _CRT_SECURE_NO_WARNINGS 1

#include "Queue.h"	

void QueueInit(Queue* pq)
{
	assert(pq);

	pq->head = NULL;
	pq->tail = NULL;
}
void QueueDestroy(Queue* pq)
{
	assert(pq);

	LinkQueue cur = pq->head;
	while (cur)
	{
		LinkQueue Next = cur->next;
		free(cur);
		cur = Next;
	}

	pq->head = pq->tail = NULL;
}
void QueuePush(Queue* pq, ElemType x)
{
	assert(pq);
	LinkQueue newnode = (LinkQueue)malloc(sizeof(Node));
	newnode->data = x;
	newnode->next = NULL;

	if (pq->head == NULL)
	{
		pq->head = pq->tail = newnode;
	}
	else
	{
		pq->tail->next = newnode;
		pq->tail = newnode;
	}
}
void QueuePop(Queue* pq)
{
	assert(pq);
	assert(!QueueEmpty(pq));

	LinkQueue cur = pq->head;
	pq->head = cur->next;
	free(cur);
	if (!pq->head)
	{
		pq->tail = NULL;
	}
}
ElemType QueueFront(Queue* pq)
{
	assert(pq);
	assert(!QueueEmpty(pq));

	return pq->head->data;
}
ElemType QueueBack(Queue* pq)
{
	assert(pq);
	assert(!QueueEmpty(pq));

	return pq->tail->data;


}
int QueueSize(Queue* pq)
{
	assert(pq);

	int n = 0;
	LinkQueue cur = pq->head;
	while (cur)
	{
		++n;
		cur = cur->next;
	}
	return n;
}
bool QueueEmpty(Queue* pq)
{
	assert(pq);
	
	return pq->head == NULL;
}

