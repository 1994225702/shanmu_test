/*
1029 求最大公约数
时间限制:1000MS  代码长度限制:10KB
提交次数:6489 通过次数:3903

题型: 编程题   语言: G++;GCC
Description
由键盘输入两个正整数m、n（m、n<1000000），计算它们的最大公约数。



输入样例
16,24


输出样例
8
*/

/*
#include <stdio.h>

int  main()
{
    int m,n,tmp;
    scanf("%d,%d",&m,&n);

    while((tmp=m%n))
    {
        m=n;            //辗转相除法
        n=tmp;
    }
    printf("%d",n);
    return 0;
}
*/
