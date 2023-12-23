/*
1038 打印图案
时间限制:1000MS  代码长度限制:10KB
提交次数:4316 通过次数:2828

题型: 编程题   语言: G++;GCC
Description
由键盘输入正数n（n<10），要求输出如下中间数字为n的菱形图案。



输出格式
菱形右边不留多余空格


输入样例
4


输出样例
   1
  121
 12321
1234321
 12321
  121
   1
   */



   /*
#include <stdio.h>
#include <math.h>

int main()
{
    int i,j,n;
    scanf("%d",&n);

    for(i=1-n;i<=n-1;i++)
    {
        for(j=abs(i);j>0;j--)
            printf(" ");

        int k=n-abs(i);

        /*
        for(j=1-k;j<k;j++)
            printf("%d",k-abs(j));





        for(j=1;j<=2*k-1;j++)
            printf("%d",k-abs(k-j));





        printf("\n");
    }
    return 0;
}
*/
