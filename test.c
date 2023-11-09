#define _CRT_SECURE_NO_WARNINGS 1



#include <stdio.h>
#include <stdlib.h>






















//#define LEN sizeof(struct DATA)
//
//struct DATA
//{
//    long num;
//    struct DATA* next;
//};
//
//struct DATA* create(int n)
//{
//    struct DATA* head = NULL, * p1 = NULL, * p2 = NULL;
//    int i;
//    for (i = 1; i <= n; i++)
//    {
//        p1 = (struct DATA*)malloc(LEN);
//        scanf("%ld", &p1->num);
//        p1->next = NULL;
//        if (i == 1) head = p1;
//        else p2->next = p1;
//        p2 = p1;
//    }
//    return(head);
//}
//
//struct DATA* merge(struct DATA* head, struct DATA* head2)
//{
//    /// <summary>
//    /// 标程
//    /// </summary>
//    struct DATA* p;
//    p = head;
//    while (p->next != NULL) p = p->next;
//    p->next = head2;
//    return head;

    /*if (head == NULL) return head2;
    struct DATA* p = head; 
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = head2;
    return head;*/
}

//struct DATA* insert(struct DATA* head, struct DATA* d)
//{
    /*if (head == NULL) return d;
    else if (head->num >= d->num)   
    {
        d->next = head;
        return d;
    }
    else 
    {
        struct DATA * p = head,*pre;
        while (p->next != NULL)
        {
            pre = p;
            p = p->next;
            if (p->num > d->num)
            {
                d->next = pre->next;
                pre->next = d;
                break;
            }   
        }
        if (p->next == NULL)
        {
            d->next = p->next;
            p->next = d;
        }
        
    }*/



    /*struct DATA* p0, * p1, * p2=NULL;
    p1 = head;  p0 = d;
    if (head == NULL)
    {
        head = p0;
    }
    else
    {
        while ((p0->num > p1->num) && (p1->next != NULL))
        {
            p2 = p1;     p1 = p1->next;
        }
        if (p0->num <= p1->num)
        {
            if (head == p1) head = p0;
            else p2->next = p0;
            p0->next = p1;
        }
        else { p1->next = p0; }
    }
    return head;*/

    //标程
    /*struct DATA* p0, * p1, * p2;
    p1 = head;
    p0 = d;
    if (head == NULL) { head = p0; p0->next = NULL; }
    else
    {
        while ((p0->num > p1->num) && (p1->next != NULL))
        {
            p2 = p1;
            p1 = p1->next;
        }
        if (p0->num <= p1->num)
        {
            if (head == p1)head = p0;
            else p2->next = p0;
            p0->next = p1;
        }
        else { p1->next = p0; p0->next = NULL; }
    }
}

struct DATA* sort(struct DATA* head)
{
    /// <summary>
    /// 标程
    /// </summary>
    struct DATA* p1, * p2;
    p2 = head; p1 = head;
    p2 = p2->next;
    p1->next = NULL;
    p1 = p2;
    while (p2->next != NULL)
    {
        p2 = p2->next;
        p1->next = NULL;
        head = insert(head, p1);
        p1 = p2;
    }
    head = insert(head, p1);*/

    /*struct DATA* p = head,*q = NULL,*head2 = NULL;
    while (p != NULL)
    {
        q = p->next;
        p->next = NULL;
        head2 = insert(head2, p);
        p = q;
    }
    head = head2;

    return head;*/
//}

//void print(struct DATA* head)
//{
//    struct DATA* p;
//    p = head;
//    while (p != NULL)
//    {
//        printf("%ld", p->num);
//        p = p->next;
//        printf("\n");
//    }
//}
//
//main()
//{
//    struct DATA* head, * head2;
//    int n;
//    long del_num;
//    scanf("%d", &n);
//    head = create(n);
//    scanf("%d", &n);
//    head2 = create(n);
//    head = merge(head, head2);
//    head = sort(head);
//    print(head);
//}


