/*
18047 水仙花数
时间限制:1000MS  代码长度限制:10KB
提交次数:0 通过次数:0

题型: 编程题   语言: G++;GCC;VC
Description
输出所有的水仙花数。所谓水仙花数是一个3位的正整数，其各位数字的立方和等于这个数本身。
例如，153是水仙花数，因为1^3+5^3+3^3=153。 ^代表上标



输入格式
无


输出格式
一行一个，由小到大输出所有水仙花数


输入样例
无


输出样例
略
*/
/*
#include <stdio.h>
int main()
{
    int i,j;
    for(i=100;i<1000;i++)
    {
        int tmp = i;
        int sum = 0;
        while(tmp)
        {
            sum+=(tmp%10)*(tmp%10)*(tmp%10);
            tmp/=10;
        }
        if(sum==i)
            printf("%d\n",i);
    }
    return 0;
}
*/
