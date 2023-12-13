/*
18063 Ȧ�е���Ϸ
ʱ������:1000MS  ���볤������:10KB
�ύ����:0 ͨ������:0

����: �����   ����: G++;GCC;VC
Description
��n����Χ��һȦ���ӵ�1���˿�ʼ����1��2��3��ÿ����3�����˳�Ȧ�ӡ����ʹ�������ҳ�������µ��ˡ�



�����ʽ
����һ����n��1000000>=n>0


�����ʽ
���������µ��˵ı��


��������
3


�������
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






















