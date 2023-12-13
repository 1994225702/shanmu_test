/*18064 ���������ϲ�
ʱ������:1000MS  ���볤������:10KB
�ύ����:0 ͨ������:0

����: �����   ����: G++;GCC;VC
Description
��֪����������a��b�����������ͬ��������һ��int���͵����ݡ���̰���������ϲ���һ������㰴�������С�

�����ʽ
��һ��һ����n����ʾ��һ���б�����ݸ���
ÿ����Ϊn����
������Ϊһ����m
������Ϊm����


�����ʽ
����ϲ������������ݣ�һ��һ����


��������
2
4 8
3
9 1 5


�������
1
4
5
8
9
*/
/*
#include "stdio.h"
#include "malloc.h"
#define LEN sizeof(struct DATA)

struct DATA
{
     long num;
     struct DATA *next;
};

struct DATA *create(int n)
{
     struct DATA *head=NULL,*p1=NULL,*p2=NULL;
     int i;
     for(i=1;i<=n;i++)
     {  p1=(struct DATA *)malloc(LEN);
        scanf("%ld",&p1->num);
        p1->next=NULL;
        if(i==1) head=p1;
        else p2->next=p1;
        p2=p1;
      }
      return(head);
}

struct DATA *merge(struct DATA *head, struct DATA *head2)
{
    if(!head ) return head2;

    struct DATA* cur=head;

    while(cur->next)
    {
        cur=cur->next;
    }
    cur->next=head2;

    return head;
}

struct DATA *insert(struct DATA *head, struct DATA *d)
{
    if(!head) return d;
    struct DATA* Newhead = (struct DATA*)malloc(sizeof(struct DATA));

    Newhead->next=head;
    struct DATA* pre = Newhead;
    struct DATA* cur = Newhead->next;
    while(cur->next&& d->num>cur->num)
    {
        pre=cur;
        cur=cur->next;
    }
    if(d->num<=cur->num)
    {
        pre->next=d;
        d->next=cur;
    }
    else cur->next=d;

    head = Newhead->next;
    return head;
}

struct DATA *sort(struct DATA *head)
{
    struct DATA* head2 = NULL;
    struct DATA* cur  =  head,*Next = NULL;


    while(cur)
    {
        Next=cur->next;
        cur->next = NULL;


        head2 = insert(head2,cur);

        cur = Next;
    }

    head = head2;


    return head;
}

void print(struct DATA *head)
{
    struct DATA *p;
    p=head;
    while(p!=NULL)
    {
        printf("%ld",p->num);
        p=p->next;
        printf("\n");
    }
}

main()
{
    struct DATA *head = NULL, *head2 = NULL;
    int n;
    long del_num;
    scanf("%d",&n);
    head=create(n);

    scanf("%d",&n);
    head2=create(n);

    head = merge(head, head2);

    head = sort(head);
    print(head);
}
*/



