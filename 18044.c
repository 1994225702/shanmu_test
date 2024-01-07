/*
18044 成绩等级评分
时间限制:1000MS  代码长度限制:10KB
提交次数:0 通过次数:0

题型: 编程题   语言: G++;GCC;VC
Description
编写程序，由键盘输入一个百分制的整数成绩，要求输出对应的成绩等级。90分以上为A，80到89分为B，70到79分为C，60到69分为D，
60分以下为E。成绩不在0到100之间时输出“error”



输入格式
一个整数成绩


输出格式
输出对应的等级或error


输入样例
99


输出样例
A
*/

/*

#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    if(n>=90 &&n<=100) printf("A");
    else if(n>=80&&n<90) printf("B");
    else if(n>=70&&n<80) printf("C");
    else if(n>=60&&n<70) printf("D");
    else if(n>=0&&n<60) printf("E");
    else printf("error");
    return 0;
}
*/
