/*
1062 打印矩阵
时间限制:1000MS  代码长度限制:10KB
提交次数:5768 通过次数:3317

题型: 编程题   语言: G++;GCC
Description
由键盘输入一个3＊4的矩阵，要求输出它的转置矩阵。



输入格式
3行4列的矩阵，数与数之间由一个空格分隔


输出格式
4行3列的矩阵，数与数之间由一个空格分隔


输入样例
1 6 9 3
1 1 0 2
1 9 8 9


输出样例
1 1 1
6 1 9
9 0 8
3 2 9
*/
/*
#include <stdio.h>

int main()
{
    int i,j,a[3][4] = {0};

    for(i=0;i<3;i++)
        for(j=0;j<4;j++)
        scanf("%d",&a[i][j]);
    for(i=0;i<4;i++)
        {
            for(j=0;j<3;j++)
        printf("%d ",a[j][i]);
    printf("\n");
        }

    return 0;
}
*/
