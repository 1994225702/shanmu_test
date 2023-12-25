/*
1044 输出最小值
时间限制:1000MS  代码长度限制:10KB
提交次数:5020 通过次数:4089

题型: 编程题   语言: G++;GCC
Description
从键盘输入十个整数，输出最小值



输入格式
输入的整数绝对值不会超过10000


输出格式
按样例格式输出结果


输入样例
12  45  76  87  5  87  43  55  99  21


输出样例
5
*/
/*
#include <stdio.h>

int main()
{
    int min,i,num[10]={0};
    for(i=0;i<10;i++)
    {
        scanf("%d",num+i);
        if(i==0)
            min=num[i];
        if(num[i]<min)
            min=num[i];
    }
    printf("%d",min);
    return 0;
}
*/
