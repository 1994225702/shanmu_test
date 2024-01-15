/*
18060 删除空格
时间限制:1000MS  代码长度限制:10KB
提交次数:0 通过次数:0

题型: 填空题   语言: G++;GCC;VC
Description
用指针方法解决，输入一个字符串，删除字符串中所有空格后，输出字符串




输入格式
一行字符，以换行回车结束，最多不超过80个字符


输出格式
删除所有空格后输出


输入样例
abc    456


输出样例
abc456
*/

/*
#include <stdio.h>
//双指针法
void removeSpace(char *s)
{
    int i=0,j=0;
    while(s[i]!='\0')
    {
        if(s[i]==' ')
        {
            i++;
        }
        else
        {
            s[j++]=s[i++];
        }
    }
    s[j]='\0';
}

int main()
{
    char s[81];
    gets(s);
    removeSpace(s);
    printf("%s", s);
    return 0;
}

*/




