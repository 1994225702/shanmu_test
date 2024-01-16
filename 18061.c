/*
18061 数的交换
时间限制:1000MS  代码长度限制:10KB
提交次数:0 通过次数:0

题型: 填空题   语言: G++;GCC;VC
Description
输入10个整数，把其中最小的数与第一个数交换，最大的数与最后一个数交换。使用3个函数解决问题：
(1) 输入10个整数的函数
(2) 进行交换处理的函数
(3) 输出10个数的函数




输入格式
输入10个整数


输出格式
输出结果，一行一个数字


输入样例
2 1 3 4 5 6 7 8 9 0


输出样例
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
