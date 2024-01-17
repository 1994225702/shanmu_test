/*
18066 元音字母
时间限制:1000MS  代码长度限制:10KB
提交次数:0 通过次数:0

题型: 填空题   语言: G++;GCC;VC
Description
编写一个函数，挑选一个字符串中的所有元音字母构成并返回一个新的字符串




输入格式
由键盘输入一行字符，以'\n'结束


输出格式
输出新构成的字符串


输入样例
I am good


输出样例
Iaoo


提示
元音字母有a、e、i、o、u，这5个元音字母，大写或小写
*/
/*

#include "stdio.h"

void yuan(char *s,char *s2)
{
    int i=0,j=0;
    while(s[i]!='\0')
    {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'
           ||s[i]=='I'||s[i]=='O'||s[i]=='U')
        {
            s2[j++]=s[i++];
        }
        else
            i++;
    }
    s2[j]='\0';

}

main()
{
    char str[81], str2[81];
    gets(str);
    yuan(str,str2);
    printf("%s", str2);
}

*/
