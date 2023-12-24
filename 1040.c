/*
1040 统计不同数字的个数
时间限制:1000MS  代码长度限制:10KB
提交次数:4003 通过次数:2699

题型: 编程题   语言: G++;GCC
Description
由键盘输入20个整数，统计不同数字的个数。



输入样例
70  5  14  22  19  2  99  67  13  66  5  93  44  38  22  11  39  22  33  11


输出样例
16


提示
因为5有1个重复数字，11有1个重复数字，22有2个重复数字

*/
/*
#include <stdio.h>

int main()
{
    int i,a,max,count=0, b[10000] = {0};
    scanf("%d",&max);
    b[max] = 1;
    for(i=1;i<20;i++)
    {
        scanf("%d",&a);
        if(a>max) max=a;
        b[a]=1;
    }
    for(i=0;i<=max;i++)
        if(b[i])
        count++;
    printf("%d",count);

    return 0;
}
*/
