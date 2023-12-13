/*18064 链表的有序合并
时间限制:1000MS  代码长度限制:10KB
提交次数:0 通过次数:0

题型: 填空题   语言: G++;GCC;VC
Description
已知有两个链表a和b，结点类型相同，均包括一个int类型的数据。编程把两个链表合并成一个，结点按升序排列。

输入格式
第一行一个数n，表示第一个列表的数据个数
每二行为n个数
第三行为一个数m
第四行为m个数


输出格式
输出合并后的有序的数据，一行一个数


输入样例
2
4 8
3
9 1 5


输出样例
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



