#define _CRT_SECURE_NO_WARNINGS 1



#include "SeqList.h"
void CheckCapacity(SL* ps)
{
	if (ps->size == ps->capacity)
	{
		int newcapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
		SLtype* tmp = (SLtype*)realloc(ps->a, newcapacity * sizeof(SLtype));
		if (tmp == NULL)
			exit(-1);//强制退出程序
		ps->a = tmp;
		ps->capacity = newcapacity;
	}
}
void SeqListPrint(SL* ps)
{
	for (int i = 0; i < ps->size; i++)
		printf("%d ", ps->a[i]);
	printf("\n");
}

void SeqListInit(SL* ps)
{
	ps->a = NULL;
	ps->capacity = ps->size = 0;

}
void SeqListDestroy(SL* ps)
{
	free(ps->a);
	ps->a = NULL;
	ps->capacity = ps->size = 0;
}
void SeqListPushBack(SL* ps, SLtype x)
{
	CheckCapacity(ps);
	ps->a[ps->size++] = x;
}
void SeqListPopBack(SL* ps)
{
	//if (ps->size > 0)
	//{
	//	//ps->a[ps->size-1]=0;
	//	ps->size--;//原有数据不变，改变的是打印的个数
	//}
	assert(ps->size > 0);
	ps->size--;
}
void SeqListPushFront(SL* ps, SLtype x)
{
	CheckCapacity(ps);

	int end = ps->size - 1;
	while (end >= 0)
	{
		ps->a[end + 1] = ps->a[end];
		end--;
	}
	ps->a[end + 1] = x;
	ps->size++;
}
void SeqListPopFront(SL* ps)
{
	assert(ps->size > 0);
	int begin = 1;
	while (begin < ps->size)
	{
		ps->a[begin - 1] = ps->a[begin];
		begin++;
	}

	ps->size--;

}



int SeqListFind(SL* ps, SLtype x)
{
	for (int i = 0; i < ps->size; i++)
		if (ps->a[i] == x)
			return i;
	return -1;
}
void SeqListInsert(SL* ps, int pos, SLtype x)
{
	assert(pos > 0 && pos <= ps->size+1);

	CheckCapacity(ps);
	int i,end = ps->size;
	for (i = end; i >= pos; i--)
	{
		ps->a[i] = ps->a[i - 1];
	}
	ps->a[pos - 1] = x;
	ps->size++;
}
void SeqListErase(SL* ps, int pos)
{
	assert(pos > 0 && pos <= ps->size);
	int i, begin = pos-1;
	for (i = begin; i < ps->size-1; i++)
	{
		ps->a[i] = ps->a[i + 1];
	}
	ps->size--;
}

