/*
18057 ASCII码值之和的差
时间限制:1000MS  代码长度限制:10KB
提交次数:0 通过次数:0

题型: 编程题   语言: G++;GCC;VC
Description
输入两个字符串s1和s2(每个串占一行，以换行回车符结束)，计算两个字符串的所有字符的ASCII码值之和的差。



输入格式
两行字符，第行字符不超过80个字符


输出格式
ASCII码值之和的差


输入样例
234
123


输出样例
3
*/

/*
#include <stdio.h>
#include <string.h>
int main()
{
    char s1[81] = {0};
    char s2[81] = {0};
    gets(s1);
    gets(s2);
    int sum1=0;
    int sum2=0;
    for(int i=0;i<strlen(s1);i++)
    {
        sum1 += s1[i];
    }
    for(int i=0;i<strlen(s2);i++)
    {
        sum2 +=s2[i];
    }

    printf("%d",sum1-sum2);


    return 0;

}

*/
