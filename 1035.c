/*
1035 打印菱形图案
时间限制:1000MS  代码长度限制:10KB
提交次数:4874 通过次数:3064

题型: 编程题   语言: G++;GCC
Description
由键盘输入正数n（n<30），要求输出如下2*n+1行的菱形图案。



输出格式
菱形右边不留多余空格


输入样例
2


输出样例
  *
 ***
*****
 ***
  *

  */
/*
  #include <stdio.h>
  #include <math.h>
  int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=-n;i<=n;i++)
    {
        for(j=abs(i);j>0;j--)
            printf(" ");
        for(j=2*(n-abs(i))+1;j>0;j--)
        {
            printf("*");
        }
        printf("\n");

    }
    return 0;
}
*/
