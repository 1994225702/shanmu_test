/*
1104 [�����]����ĵ���
ʱ������:1000MS  ���볤������:10KB
�ύ����:2326 ͨ������:1641

����: �����   ����: GCC
Description
��������ȴ���һ������Ȼ�����reverse�������������и�����Ϊ�������С������reverse������




��������
3			��3 students��
1			��code of no.1 student��
98			��score of no.1 student��
4			��code of no.2 student��
99			��score of no.2 student��
5			��code of no.3 student��
87			��score of no.3 student��


�������
       1      98
       4      99
       5      87
       5      87
       4      99
       1      98


       */

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
//struct student *reverse(struct student *head)
//{
//    struct student* next=NULL,*cur=head,*Newhead=NULL;
//    while(cur)
//    {
//        next=cur->next;
//        cur->next=NULL;
//        if(!Newhead) Newhead=cur;
//        else{
//            cur->next=Newhead;
//            Newhead=cur;
//        }
//        cur=next;
//    }
//    return Newhead;
//
//}
//
//main()
//{
//    struct student *head,*stu;
//    int n;
//    scanf("%d",&n);
//    head=create(n);
//    print(head);
//    head=reverse(head);
//    print(head);
//}
