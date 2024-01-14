/*
18058 一年的第几天
时间限制:1000MS  代码长度限制:10KB
提交次数:0 通过次数:0

题型: 填空题   语言: G++;GCC;VC
Description
定义一个结构体类型表示日期类型（包括年、月、日）。程序中定义一个日期类型的变量，输入该日期的年、月、日，
计算并输出该日期是一年的第几天。



输入格式
年月日，格式如样例


输出格式
该年的第几天


输入样例
2015-1-1


输出样例
1
*/

/*
#include <stdio.h>

struct DATE
{
    int year;
    int month;
    int day;
};

int days(struct DATE date)
{
    int DAY[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    if(date.year%400==0||date.year%4==0&&date.year%100!=0)
        DAY[1]=29;
    int sum=0;
    for(int i=0;i<date.month-1;i++)
        sum+=DAY[i];
    return sum+=date.day;
}

int main()
{
    struct DATE d;
    scanf("%d-%d-%d", &d.year, &d.month, &d.day);
    printf("%d", days(d));
}
*/
