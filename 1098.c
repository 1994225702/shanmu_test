/*

1098 [填空]链表结点的插入
时间限制:1000MS  代码长度限制:10KB
提交次数:2783 通过次数:1484

题型: 填空题   语言: GCC
Description
完成插入链表结点的函数(按学号顺序)，并调试通过、提交。




输入样例
3			（3 students）
1			（code of no.1 student）
98			（score of no.1 student）
3			（code of no.2 student）
99			（score of no.2 student）
5			（code of no.3 student）
87			（score of no.3 student）
4			（code of no.3 student needs be inserted）
77			（score of no.3 student needs be inserted）


输出样例
       1      98
       3      99
       5      87
       1      98
       3      99
       4      77
       5      87

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
//struct student *insert(struct student *head, struct student *stud)
//{
//    if(!head) return stud;
//    else
//    {
//        struct student*pre=NULL,*cur=head;
//        while(cur->next&&stud->num>cur->num)
//        {
//            pre=cur;
//            cur=cur->next;
//        }
//        if(stud->num<=cur->num)
//        {
//            if(head==cur)
//            {
//                stud->next=head;
//                head=stud;
//            }
//            else
//            {
//                stud->next=cur;
//                pre->next=stud;
//            }
//
//        }
//        else cur->next=stud;
//        return head;
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
//    stu=(struct student *)malloc(LEN);
//    scanf("%ld",&stu->num);
//    scanf("%d",&stu->score);
//    stu->next = NULL;
//    head=insert(head,stu);
//    print(head);
//}
