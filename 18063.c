/*
18063 圈中的游戏
时间限制:1000MS  代码长度限制:10KB
提交次数:0 通过次数:0

题型: 编程题   语言: G++;GCC;VC
Description
有n个人围成一圈，从第1个人开始报数1、2、3，每报到3的人退出圈子。编程使用链表找出最后留下的人。



输入格式
输入一个数n，1000000>=n>0


输出格式
输出最后留下的人的编号


输入样例
3


输出样例
2
*/

#include <stdio.h>

typedef struct Person
{
    int num;
    struct Person* next;
} Person;

Person* create(int n)
{
    Person* head = NULL;
    Person* tail = NULL;
    for(int i=1;i<=n;i++)
    {
        Person* cur = (Person*)malloc(sizeof(Person));
        cur->num = i;
        cur->next=NULL;
        if(!head)
        {
            head=tail=cur;
            continue;
        }
        else
            tail->next = cur;
        tail =tail->next;

    }
    tail->next=head;
    return head;
}
int main()
{
    int n;
    scanf("%d",&n);

    Person* head = create(n);

    for(int i=1;;i++)
    {
        Person* Next= head->next;
        if(head->next==head)
            {
                printf("%d",head->num);
        return 0;
            }
        if(i%3==0)
        {
            head->next=Next->next;
            free(Next);
        }
        head=head->next;

    }
    return 0;

}






















