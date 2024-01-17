/*
18065 所有数字之和
时间限制:1000MS  代码长度限制:10KB
提交次数:0 通过次数:0

题型: 填空题   语言: G++;GCC;VC
Description
编写一个函数，计算一个整数的所有数字之和




输入格式
由键盘输入一个整数


输出格式
输出该数各位数字之和


输入样例
123


输出样例
6


提示
1+2+3=6
*/


/*

#include "stdio.h"

int sum(int n)
{
    int sum=0;
    while(n)
    {
        sum+=n%10;
        n/=10;
    }
    return sum;
}

main()
{
    int n;
    scanf("%d", &n);
    printf("%d", sum(n));
}

*/
