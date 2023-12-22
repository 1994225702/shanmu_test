/*
1030 字符变换
时间限制:1000MS  代码长度限制:10KB
提交次数:4694 通过次数:3363

题型: 编程题   语言: G++;GCC
Description
由键盘输入一个句子（字符个数不定，最多不超过80个，以'\n'结束），将其中的大写字符变成小写（其它类型的字符不变），
最后输出变换后的句子。



输入样例
ThiS IS My fIrSt C ProgrAm!


输出样例
this is my first c program!
*/
/*
#include <stdio.h>
#include <string.h>
int main()
{
    char str[81] = {0};
    gets(str);
    int i=0;
    while(str[i]!='\0')
    {
        if(isupper(str[i]))
            printf("%c",tolower(str[i]));
        else printf("%c",str[i]);
        i++;
    }
    return 0;
}
*/
