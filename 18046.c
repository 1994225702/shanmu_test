/*
18046 字母分类统计
时间限制:1000MS  代码长度限制:10KB
提交次数:0 通过次数:0

题型: 编程题   语言: G++;GCC;VC
Description
输入一行以换行符结束的字符，统计并输出其中英文字母、数字、空格和其它字符的个数。



输入格式
一行字符，以换行符结束


输出格式
一行4个数字分别为：英文字母、数字、空格和其它字符的个数，两数据之间以一个空格分隔


输入样例
ABC 456!


输出样例
3 3 1 1
*/

/*
#include <stdio.h>
#include <string.h>
int nL,nN,nS,nO;
int main()
{
    char ch;
    while((ch=getchar())!='\n')
    {
        if(isalpha(ch))
            nL++;
        else if(isdigit(ch))
            nN++;
        else if(ch==' ')
            nS++;
        else nO++;

    }
    printf("%d %d %d %d",nL,nN,nS,nO);
    return 0;
}
*/
