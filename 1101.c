/*
1101 [填空题]链表的排序
时间限制:1000MS  代码长度限制:10KB
提交次数:2521 通过次数:1567

题型: 填空题   语言: GCC
Description
下面程序，先创建一个链表（链表中各结点未按学号由小到大排序），然后调用sort函数，将链表中各结点按学号由小到大排序。


输入样例
3			（the 1st linked list, 2 students）
1			（code of no.1 student）
98			（score of no.1 student）
7			（code of no.2 student）
99			（score of no.2 student）
5			（code of no.3 student）
87			（score of no.3 student）


输出样例
       1      98
       7      99
       5      87
       1      98
       5      87
       7      99

       */


//
//#include "stdio.h"
//#include "malloc.h"
//#define LEN sizeof(struct student)
//
//struct student
//{
//     long num;
//     int score;
//     struct student *next;
//};
//
//struct student *create(int n)
//{
//     struct student *head=NULL,*p1=NULL,*p2=NULL;
//     int i;
//     for(i=1;i<=n;i++)
//     {  p1=(struct student *)malloc(LEN);
//        scanf("%ld",&p1->num);
//        scanf("%d",&p1->score);
//        p1->next=NULL;
//        if(i==1) head=p1;
//        else p2->next=p1;
//        p2=p1;
//      }
//      return(head);
//}
//
//void print(struct student *head)
//{
//    struct student *p;
//    p=head;
//    while(p!=NULL)
//    {
//        printf("%8ld%8d",p->num,p->score);
//        p=p->next;
//        printf("\n");
//    }
//}
//
//struct student *insert(struct student *head, struct student *stud)
//{  struct student *p0,*p1,*p2;
//    p1=head;  p0=stud;
//    if(head==NULL)
//      {head=p0;}
//    else
//   { while( (p0->num > p1->num) && (p1->next!=NULL) )
//       { p2=p1;     p1=p1->next;}
//     if( p0->num <= p1->num )
//      {  if( head==p1 ) head=p0;
//           else p2->next=p0;
//         p0->next=p1; }
//     else {  p1->next=p0;}
//     }
//    return(head);
//}
//
//struct student *del(struct student *head,long num)
//{
//    struct student *p1,*p2;
//    p1=head;
//    while(p1!=NULL)
//    {
//        if(p1->num == num)
//        {
//          if(p1 == head) head=p1->next;
//          else p2->next=p1->next;
//          free(p1);
//          break;
//        }
//        p2=p1;
//        p1=p1->next;
//    }
//    return(head);
//}
//
//struct student *sort(struct student *head)
//{
//    if(!head) return NULL;
//    else
//    {
//        struct student* next=NULL,*cur=head,*Newhead=NULL;
//        while(cur)
//        {
//            next=cur->next;
//            cur->next=NULL;
//            if(!Newhead) Newhead=cur;
//            else
//            {
//                Newhead=insert(Newhead,cur);
//            }
//            cur=next;
//
//        }
//        return Newhead;
//    }
//}
//
//main()
//{
//    struct student *head,*stu;
//    int n;
//    scanf("%d",&n);
//    head=create(n);
//    print(head);
//    head=sort(head);
//    print(head);
//}

