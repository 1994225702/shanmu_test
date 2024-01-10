/*
18050 打印三角形
时间限制:1000MS  代码长度限制:10KB
提交次数:0 通过次数:0

题型: 编程题   语言: G++;GCC;VC
Description
编写程序，输入整数n，输出n行的字符图案。例如n=5时输出：
    *
   **
  ***
 ****
*****
 ****
  ***
   **
    *




输入格式
输入一个整数


输出格式
输出2*n-1行的三角形


输入样例
2


输出样例
 *
**
 *

 */
/*
 #include <stdio.h>
 #include <math.h>
 int main()
{
    int n,i,j;
    scanf("%d",&n);

    for(i=-(n-1);i<=n-1;i++)
    {
        for(j=abs(i);j>0;j--)
            printf(" ");
        for(j=n-abs(i);j>0;j--)
            printf("*");
        printf("\n");
    }

    return 0;
}
*/
/*
#include <stdio.h>
#define abs(x) ((x)>=0?(x):-(x))

int main()
{
    int n,i,j;
    scanf("%d", &n);
    for(i=-(n-1); i<=(n-1); i++)
    {
        for(j=0; j<abs(i); j++)
            printf(" ");
        for(j=0; j<n-abs(i); j++)
            printf("*");
        printf("\n");
    }
    return 0;
}
*/
