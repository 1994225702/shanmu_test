/*
18069 x的n次方
时间限制:1000MS  代码长度限制:10KB
提交次数:0 通过次数:0

题型: 填空题   语言: G++;GCC;VC
Description
输入正整数x和n，编写递归函数求x的n次方。




输入格式
两个正整数，x和n


输出格式
x的n次方，假定结果不会超过10的次方。


输入样例
5 2


输出样例
25
*/

/*

#include <stdio.h>

int F(int x, int n)
{
    if(n==0) return 1;
    else return x*F(x,n-1);
}

int main()
{
    int x, n;
    scanf("%d%d", &x, &n);
    printf("%d", F(x, n));
    return 0;
}
*/
