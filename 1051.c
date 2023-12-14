/*
1051 找矩阵中的鞍点
时间限制:1000MS  代码长度限制:10KB
提交次数:5713 通过次数:1874

题型: 编程题   语言: G++;GCC
Description
由键盘输入一个3＊4（3行4列）的数字矩阵，其中任意两个数字均不相同。要求输出该数字矩阵中的鞍点（即在矩阵行中最大，列中最小的数）。
若没有鞍点，输出“NO”字样。



输入样例
87  90  110  98
70  97  210  65
99  45  120  30


输出样例
110
*/
/*

#include <stdio.h>


int main()
{
    int mal[3][4] = {0};
    int i,j,col;
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            scanf("%d",&mal[i][j]);
        }
    }

    for(i=0;i<3;i++)
    {
        int max=mal[i][0];
        for(j=1;j<4;j++)
        {
            if(max<mal[i][j])
            {
                max=mal[i][j];
                col=j;
            }
        }
        if(max<=mal[0][col]&&max<=mal[1][col]&&max<=mal[2][col])
        {
            printf("%d",max);
            return 0;
        }
    }
    printf("NO");
    return 0;
}

*/
