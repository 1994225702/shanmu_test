/*
18056 字母统计
时间限制:1000MS  代码长度限制:10KB
提交次数:0 通过次数:0

题型: 编程题   语言: G++;GCC
Description
输入三行字符串（每行以换行回车为结束符），每行不超过80个字符。统计并输出其有多少个大写字母。



输入格式
三行字符串


输出格式
大写字母个数


输入样例
A-1 123
ABC abc
G


输出样例
5
*/

/*
#include <stdio.h>
#include <string.h>

int main()
{
    char str[81]={0};
    int i,sum=0;
    for(i=0;i<3;i++)
    {
        gets(str);
        for(int j=0;j<strlen(str);j++)
        {
            if(isupper(str[j]))
                sum++;
        }

    }
    printf("%d",sum);
    return 0;
}

*/

