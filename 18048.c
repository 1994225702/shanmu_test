/*
18048 自由落体
时间限制:1000MS  代码长度限制:10KB
提交次数:0 通过次数:0

题型: 编程题   语言: G++;GCC;VC
Description
一个球从100米的高度自由落下，每次落地后弹起的原来高度的一半。计算并输出第n次落地时，共经过了多少米，第n次弹起的高度是多少?结果显示3位小数。



输入格式
从键盘输入一个数n（n>0）


输出格式
输出两个数，分别为共经过的米数和第n次弹起的高度，以一个空格分隔


输入样例
1


输出样例
100.000 50.000
*/

/*

#include <stdio.h>

int main()
{
    int n,i;
    scanf("%d",&n);
    double h=100,s=100;
    if(n==1) printf("100.000 50.000");
    else
    {for(i=1;i<n;i++)
    {
        h/=2;
        s+=2*h;
    }
    printf("%.3lf %.3lf",s,h/2);
    }

    return 0;
}

*/
/*
#include <stdio.h>
#include <math.h>
int main()
{
    double sum=-100, d=100;
    int i,n;
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        sum+=2*d;
        d/=2;
    }
    printf("%.3f %.3f", sum, d);
    return 0;
}
*/
