/*
18061 ���Ľ���
ʱ������:1000MS  ���볤������:10KB
�ύ����:0 ͨ������:0

����: �����   ����: G++;GCC;VC
Description
����10����������������С�������һ���������������������һ����������ʹ��3������������⣺
(1) ����10�������ĺ���
(2) ���н�������ĺ���
(3) ���10�����ĺ���




�����ʽ
����10������


�����ʽ
��������һ��һ������


��������
2 1 3 4 5 6 7 8 9 0


�������
input done
swap done
0
1
3
4
5
6
7
8
2
9
display done
*/

/*

#include <stdio.h>

void input(int a[])
{
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
}

void swap(int a[])
{
    int* min = a;
    int* max = a+9;
    int i,tmp;
    for(i=0;i<10;i++)
    {
        if(a[i]<*min)
            min=&a[i];
    }
    tmp = *min;
    *min = a[0];
    a[0] = tmp;

    for(i=0;i<10;i++)
    {
        if(a[i]>*max)
            max=&a[i];
    }
    tmp = *max;
    *max = a[9];
    a[9] = tmp;
}

void display(int a[])
{
    int i;
    for(i=0; i<10; i++)
        printf("%d\n", a[i]);
}

int main()
{
    int a[10];
    input(a);
    printf("input done\n");
    swap(a);
    printf("swap done\n");
    display(a);
    printf("display done\n");
    return 0;
}
*/
