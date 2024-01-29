//#pragma once
//
//#include <assert.h>
//#include <stdio.h>
//#include <stdlib.h>
//#include <stdbool.h>
//
//typedef int ElemType;
//
//typedef struct QueueNode
//{
//    ElemType data;
//    struct QueueNode* next;
//}Node;
//typedef struct QueueNode* LinkQueue;
//typedef struct Queue
//{
//    LinkQueue head;
//    LinkQueue tail;
//}Queue;
//
//
//void QueueInit(Queue* pq);
//void QueueDestroy(Queue* pq);
//void QueuePush(Queue* pq, ElemType x);
//void QueuePop(Queue* pq);
//ElemType QueueFront(Queue* pq);
//ElemType QueueBack(Queue* pq);
//int QueueSize(Queue* pq);
//bool QueueEmpty(Queue* pq);
//
//
//void QueueInit(Queue* pq)
//{
//    assert(pq);
//
//    pq->head = pq->tail = NULL;
//
//}
//void QueueDestroy(Queue* pq)
//{
//    assert(pq);
//
//    LinkQueue cur = pq->head;
//    while (cur)
//    {
//        LinkQueue Next = cur->next;
//        free(cur);
//        cur = Next;
//    }
//
//    pq->head = pq->tail = NULL;
//}
//void QueuePush(Queue* pq, ElemType x)
//{
//    assert(pq);
//    LinkQueue newnode = (LinkQueue)malloc(sizeof(Node));
//    newnode->data = x;
//    newnode->next = NULL;
//
//    if (pq->head == NULL)
//    {
//        pq->head = pq->tail = newnode;
//    }
//    else
//    {
//        pq->tail->next = newnode;
//        pq->tail = newnode;
//    }
//}
//void QueuePop(Queue* pq)
//{
//    assert(pq);
//    assert(!QueueEmpty(pq));
//
//    LinkQueue cur = pq->head;
//    pq->head = cur->next;
//    free(cur);
//    if (!pq->head)
//    {
//        pq->tail = NULL;
//    }
//}
//ElemType QueueFront(Queue* pq)
//{
//    assert(pq);
//    assert(!QueueEmpty(pq));
//
//    return pq->head->data;
//}
//ElemType QueueBack(Queue* pq)
//{
//    assert(pq);
//    assert(!QueueEmpty(pq));
//
//    return pq->tail->data;
//
//
//}
//int QueueSize(Queue* pq)
//{
//    assert(pq);
//
//    int n = 0;
//    LinkQueue cur = pq->head;
//    while (cur)
//    {
//        ++n;
//        cur = cur->next;
//    }
//    return n;
//}
//bool QueueEmpty(Queue* pq)
//{
//    assert(pq);
//
//    return pq->head == NULL;
//}
//
//typedef struct {
//
//    Queue q1;
//    Queue q2;
//
//} MyStack;
//
//
//MyStack* myStackCreate() {
//    MyStack* st = (MyStack*)malloc(sizeof(MyStack));
//    QueueInit(&st->q1);
//    QueueInit(&st->q2);
//
//    return st;
//}
//
//void myStackPush(MyStack* obj, int x) {
//    if (!QueueEmpty(&obj->q1))
//    {
//        QueuePush(&obj->q1, x);
//    }
//    else
//    {
//        QueuePush(&obj->q2, x);
//    }
//}
//
//int myStackPop(MyStack* obj) {
//    Queue* emptyQueue = &obj->q1;
//    Queue* nonemptyQueue = &obj->q2;
//    if (!QueueEmpty(&obj->q1))
//    {
//        emptyQueue = &obj->q2;
//        nonemptyQueue = &obj->q1;
//    }
//
//    while (QueueSize(nonemptyQueue) > 1)
//    {
//        QueuePush(emptyQueue, QueueFront(nonemptyQueue));
//        QueuePop(nonemptyQueue);
//    }
//
//    int top = QueueFront(nonemptyQueue);
//    QueuePop(nonemptyQueue);
//
//    return top;
//}
//
//int myStackTop(MyStack* obj) {
//    if (!QueueEmpty(&obj->q1))
//    {
//        return QueueBack(&obj->q1);
//    }
//    else
//    {
//        return QueueBack(&obj->q2);
//    }
//
//
//}
//
//bool myStackEmpty(MyStack* obj) {
//    return (QueueEmpty(&obj->q1)) && (QueueEmpty(&obj->q2));
//}
//
//void myStackFree(MyStack* obj) {
//    QueueDestroy(&obj->q1);
//    QueueDestroy(&obj->q2);
//    free(obj);
//}
//
//int main()
//{
//    MyStack* ptr = myStackCreate();
//    myStackPush(ptr, 1);
//    myStackPush(ptr, 2);
//    myStackPush(ptr, 3);
//    myStackPush(ptr, 4);
//
//    for (int i = 0; i < 4; i++)
//        printf("%d ", myStackPop(ptr));
//
//    myStackFree(ptr);
//    return 0;
//}
///**
// * Your MyStack struct will be instantiated and called as such:
// * MyStack* obj = myStackCreate();
// * myStackPush(obj, x);
//
// * int param_2 = myStackPop(obj);
//
// * int param_3 = myStackTop(obj);
//
// * bool param_4 = myStackEmpty(obj);
//
// * myStackFree(obj);
//*/
//
//
//
//
//
////typedef struct
////{
////    int queue[100];
////    int front;//��ͷ
////    int tail;//��β
////} MyStack;
////
//////ʹ��һ������ʵ��ջ����ջʱֱ����ӣ���ջʱֻ��ѳ��˶����е����һ�����ݵ����������������
////
////MyStack* myStackCreate()
////{
////    MyStack* stack = (MyStack*)malloc(sizeof(MyStack));
////    stack->front = 0;
////    stack->tail = -1;
////    return stack;
////}
//////ʹ��ѭ������
////void myStackPush(MyStack* obj, int x)
////{
////    obj->tail = (obj->tail + 1) % 100;
////    obj->queue[obj->tail] = x;
////}
////
////int myStackPop(MyStack* obj)
////{
////    int size = (obj->tail - obj->front + 1 + 100) % 100;//���д�С����ΪtailΪ-1������Ҫ+1
////    size--;//size��--�����������һ�����ݣ�
////    while (size--)
////    {
////        myStackPush(obj, obj->queue[obj->front]);//����ͷ�����������
////        obj->front = (obj->front + 1) % 100;//����
////    }
////    int result = obj->queue[obj->front];
////    obj->front = (obj->front + 1) % 100;
////    return result;
////}
////
////int myStackTop(MyStack* obj)
////{
////    return obj->queue[obj->tail];//�����еĶ�β���ݼ�Ϊջ������
////}
////
////bool myStackEmpty(MyStack* obj)
////{
////    return (obj->tail - obj->front + 101) % 100 == 0;
////}
////
////void myStackFree(MyStack* obj)
////{
////    obj->front = 0;
////    obj->tail = -1;
////}