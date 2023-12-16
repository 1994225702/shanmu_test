/*
16  旋转菱形
Time Limit:1000MS  Memory Limit:65535K
题型: 编程题   语言: G++;GCC
描述
给定一个N行的数字字符菱形。
实现将数字菱形顺时针旋转W度，W是90度的倍数。

输入格式
第一行是数字N，N小于等于10
之后是N行的数字菱形，数字字符无分隔
最后一行是一个非负整数，表示旋转W度，W是90的倍数
输出格式
旋转后的菱形，数字之间不分隔
输入样例
5
  1
 234
56789
 321
  3
90
输出样例
  5
 362
32731
 184
  9

  */


#include <stdio.h>
#include <string.h>

int main()
{
    int i,j,N,k=0;;
    char Lin[10][10]={0},tmp[10][10]={0};
    scanf("%d",&N);
/*
    t=N/2;
    for(i=-t;i<=t&&k<N;i++,k++)
    {
        for(j=abs(i);j<=N-abs(i);j++)
            scanf("%c",&Lin[k][j]);

    }*/
    gets(tmp);          //很重要***************与缓存区读取有关，把多余的space读掉
    for(i=0;i<N;i++)
    {

        gets(Lin[i]);

        /*for(j=0;j<N;j++)
        {
            scanf("%c",&Lin[i][j]);
            if(Lin[i][j]=='\n')
                break;
        }*/
    }
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            if(!isdigit(Lin[i][j]))
            {
                Lin[i][j]=' ';
            }
        }
    }
    int angle;
    scanf("%d",&angle);
    angle%=360;
    angle/=90;
    for(int k=0;k<angle;k++)
    {
        for(i=0;i<N;i++)
        {
            for(j=0;j<N;j++)
            {
                tmp[i][j]=Lin[N-1-j][i];
            }
        }
        for(i=0;i<N;i++)
        {
            for(j=0;j<N;j++)
            {
                Lin[i][j]=tmp[i][j];
            }
        }
    }
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            printf("%c",Lin[i][j]);
        }
        printf("\n");
    }

    return 0;
}
