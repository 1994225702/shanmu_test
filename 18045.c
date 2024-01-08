/*
18045 前一个和后一个字符
时间限制:1000MS  代码长度限制:10KB
提交次数:0 通过次数:0

题型: 编程题   语言: G++;GCC;VC
Description
编写程序，输入一个数字字符，输出其前一个和后一个的数字字符，如果输入的是0前一个输出
“first”，9后一个则输出“last”，输入的不是数学字符，输出“error”



输入格式
一个字符


输出格式
输出结果


输入样例
0


输出样例
first 1
*/

/*
#include <stdio.h>

int main()
{
    char digit;
    scanf("%c",&digit);

    if(digit>'0'&&digit<'9')
        printf("%c %c",digit-1,digit+1);
    else if(digit=='0')
        printf("first 1");
    else if(digit=='9')
        printf("8 last");
    else printf("error");
    return  0;
}
*/
