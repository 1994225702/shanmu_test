/*
18070 矩阵行交换或列交换
时间限制:1000MS  代码长度限制:10KB
提交次数:0 通过次数:0

题型: 填空题   语言: G++;GCC;VC
Description
输入一个4*4矩阵，编写两个函数分别实现对二维数组元素的行与行进行交换，以及列与列进行交换



输入格式
输入一个4*4矩阵


输出格式
输出经过变换的矩阵


输入样例
1 2 3 4
5 6 7 8
9 10 11 12
13 14 15 16


输出样例
6 8 5 7
14 16 13 15
2 4 1 3
10 12 9 11
*/

/*
#include <stdio.h>

void swap(int *a, int *b)
{
    int temp;
    temp=*a;*a=*b;*b=temp;
}

void col(int a[][4], int i, int j)
{
    int tmp;
    for(int k=0;k<4;k++)
    {
        tmp=a[k][i];
        a[k][i]=a[k][j];
        a[k][j]=tmp;
    }
}

void row(int a[][4], int i, int j)
{
    int tmp;
    for(int k=0;k<4;k++)
    {
        tmp=a[i][k];
        a[i][k]=a[j][k];
        a[j][k]=tmp;
    }
}

int main()
{
    int a[4][4];
    int i,j;
    for(i=0; i<4; i++)
        for(j=0; j<4; j++)
            scanf("%d", &a[i][j]);
    col(a,0,2);
    row(a,0,2);
    col(a,1,3);
    row(a,1,3);
    col(a,0,3);
    row(a,0,3);
    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
    return 0;
}
*/
