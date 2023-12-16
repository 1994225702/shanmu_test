/*
1018 数的排序
时间限制:1000MS  代码长度限制:10KB
提交次数:6288 通过次数:3742

题型: 编程题   语言: G++;GCC
Description
由键盘输入三个整数a、b、c，按从小到大的顺序输出这三个数。



输入格式
三个数由逗句分隔


输入样例
65,45,90


输出样例
45,65,90
*/
/*
#include <stdio.h>

int main()
{
    int a,b,c;
    scanf("%d,%d,%d",&a,&b,&c);
    int tmp;
    if(a>b)
    {
        tmp=a;
        a=b;
        b=tmp;
    }
    if(a>c)
    {
        printf("%d,%d,%d",c,a,b);
        return 0;
    }
    if(b>c)
    {
        printf("%d,%d,%d",a,c,b);
        return 0;
    }
    printf("%d,%d,%d",a,b,c);

    return 0;
}
*/
