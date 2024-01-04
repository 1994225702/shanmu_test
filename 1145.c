/*
1145 回文串
时间限制:1000MS  代码长度限制:10KB
提交次数:4977 通过次数:2922

题型: 编程题   语言: G++;GCC
Description
读入一行字符串（不多于80个字符，以回车结束），判断该字符串是否为回文串（即从左向右拼写与从

右向左拼写是一样的），是则输出Y，不是则输出N。



输入格式
一行字符串


输出格式
是则输出Y，不是则输出N


输入样例
abba


输出样例
Y


提示
或
input:
abcba

output:
Y

或
input:
abc

output:
N
*/
/*

#include <stdio.h>
#include <string.h>

int main()
{
    char str[81] = {0};
    gets(str);

    int left=0,right=strlen(str)-1;

    while(left<right)
    {
        if(str[left]!=str[right])
        {
            printf("N");
            return 0;
        }
        left++;
        right--;
    }
    printf("Y");

    return 0;
}
*/
