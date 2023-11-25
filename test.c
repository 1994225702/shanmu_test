#define _CRT_SECURE_NO_WARNINGS 1



#include "SeqList.h"

void TestSeqList1()
{
	SL s1;
	SeqListInit(&s1);
	SeqListPushBack(&s1, 5);
	SeqListPushBack(&s1, 2);
	SeqListPushBack(&s1, 6);
	SeqListPushBack(&s1, 8);
	SeqListPushBack(&s1, 7);
	

	SeqListPrint(&s1);

	SeqListPopBack(&s1);
	SeqListPrint(&s1);
	SeqListPopBack(&s1);

	SeqListPrint(&s1);
	SeqListPushFront(&s1, 10);
	SeqListPushFront(&s1, 10);
	SeqListPushFront(&s1, 10);
	SeqListPushFront(&s1, 10);
	SeqListPushFront(&s1, 10);
	SeqListPushFront(&s1, 10);
	SeqListPrint(&s1);

	SeqListPopBack(&s1);
	SeqListPrint(&s1);

	SeqListPopFront(&s1);
	SeqListPopFront(&s1);
	SeqListPopFront(&s1);
	SeqListPrint(&s1);

}
int main()
{
	TestSeqList1();
	return 0;
}
