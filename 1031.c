/*
1031 统计单词个数
时间限制:1000MS  代码长度限制:10KB
提交次数:4863 通过次数:2810

题型: 编程题   语言: G++;GCC
Description
写一个函数实现：输入一行字符，以空格分割单词，回车结束输入，输出单词的个数



输入样例
There are many students and many trees!


输出样例
7
*/

/*
#include <stdio.h>

int main()
{
    char word[10000] = {0};

    gets(word);
    int i=0,count=1;

    while(word[i+1]!='\0')
    {
        if(word[i]==' '&&word[i+1]!=' ')
            count++;
            i++;
    }
    printf("%d",count);

    return 0;
}
*/
