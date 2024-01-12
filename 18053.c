/*
18053 大于平均分
时间限制:1000MS  代码长度限制:10KB
提交次数:0 通过次数:0

题型: 编程题   语言: G++;GCC
Description
输入10个整数，计算它们的平均值，并统计有多少个数比平均值大。



输入格式
10个整数


输出格式
比平均值在的数的个数


输入样例
0 1 2 3 4 5 6 7 8 9


输出样例
5
*/

/*
#include <stdio.h>

int main()
{
    int num[10] = {0};
    int i,count=0;
    double sum=0;
    for(i=0;i<10;i++)
    {
        scanf("%d",&num[i]);
        sum += num[i];
    }
    sum/=10.0;
    for(i=0;i<10;i++)
    {
        if((double)num[i]>sum)
            count++;
    }
    printf("%d",count);
    return 0;
}

*/
