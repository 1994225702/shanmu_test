/*
18067 字符统计
时间限制:1000MS  代码长度限制:10KB
提交次数:0 通过次数:0

题型: 填空题   语言: G++;GCC;VC
Description
编写一个函数，统计一个字符串中字母、数字和空格的个数。使用全局变量存放字母和数字个数，函数返回值是空格个数




输入格式
输入一行字符，以'\n'符结束


输出格式
统计结果


输入样例
Ab 45


输出样例
2 2 1
*/

/*

#include <stdio.h>
#include <string.h>
#include <math.h>

int nL=0, nN=0;

int statistics(char *s)
{
    int i=0,nS=0;
    while(s[i]!='\0')
    {

        if(isdigit(s[i]))
        {
            nN++;

        }
        else if(isalpha(s[i]))
        {
            nL++;

        }
        else if(s[i]==' ')
        {
            nS++;

        }
         i++;
    }
    return nS;
}

int main()
{
    char s[81];
    int nS;
    gets(s);
    nS = statistics(s);

    printf("%d %d %d\n", nL, nN, nS);
    return 0;
}
*/
