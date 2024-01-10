/*
18049 迭代法求平方根
时间限制:1000MS  代码长度限制:10KB
提交次数:0 通过次数:0

题型: 填空题   语言: G++;GCC;VC
Description
使用迭代法求a的平方根。求平方根的迭代公式如下，要求计算到相邻两次求出的x的差的绝对值小于1E-5时停止，结果显示4位小数


_______________________

输入格式
输入一个非负实数a


输出格式
计算并输出平方根


输入样例
16


输出样例
4.0000
*/

/*
#include <stdio.h>
#include <math.h>
int main()
{
    double a;
    scanf("%lf",&a);
    double X1,X2;
    X1=a;
    X2 = 0.5*(1+a);
    while(fabs(X1-X2)>1e-5)     //注意fabs()用于求实数的绝对值
    {
        X1=X2;
        X2 = 0.5*(X1+a/X1);
    }
    printf("%.4lf",X2);
    return 0;
}
*/
