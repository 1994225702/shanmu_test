/*
18037 20秒后的时间
时间限制:1000MS  代码长度限制:10KB
提交次数:0 通过次数:0

题型: 编程题   语言: G++;GCC
Description
编写程序，输入三个整数变量hour（小时）、minute（分钟）、second（秒）代表一个时间，
输出该时间20秒以后的时间。



输入格式
一行三个整数，分别代表小时、分钟、秒，中间使用冒号分隔


输出格式
输出一个时间，数字间用冒号分隔
小时、分钟、秒均占两个数字位，不足位用0补足


输入样例
15:30:41


输出样例
15:31:01
*/

/*
#include <stdio.h>
#include <assert.h>
int main()
{
    int hour,minute,second;
    scanf("%d:%d:%d",&hour,&minute,&second);

    assert(hour>=0&&hour<24);
    assert(minute>=0&&minute<60);
    assert(second>=0&&second<60);

    second+=20;
    if(second>=60)
    {
        second%=60;     //取余运算的应用
        minute++;
        if(minute==60)
        {
            minute=0;
            hour++;
            if(hour==24)
                hour=0;
        }
    }
    printf("%02d:%02d:%02d",hour,minute,second);

    return 0;
}


*/
