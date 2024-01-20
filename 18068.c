/*
18068 选择排序
时间限制:1000MS  代码长度限制:10KB
提交次数:0 通过次数:0

题型: 填空题   语言: G++;GCC;VC
Description
输入10个整数，编写一个实现对数组进行选择排序的函数




输入格式
10个整数，以空格分隔


输出格式
排序后的10个整数，一行一个数字


输入样例
3 2 1 6 5 4 9 8 7 0


输出样例
0
1
2
3
4
5
6
7
8
9
*/

/*

#include <stdio.h>

int sort(int a[], int n)
{
    int i,j,k,tmp;
    for(i=0;i<n-1; i++)
    {
        k=i;
        for(j=i+1;j<n;j++)
            if(a[k]>a[j]) k=j;
        tmp=a[k];a[k]=a[i];a[i]=tmp;
    }
}

int main()
{
    int a[10];
    int i;
    for(i=0; i<10; i++) scanf("%d", &a[i]);
    sort(a,10);
    for(i=0; i<10; i++) printf("%d\n", a[i]);
    return 0;
}

*/
