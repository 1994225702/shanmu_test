/*
18041 分期还款(加强版)
时间限制:1000MS  代码长度限制:10KB
提交次数:0 通过次数:0

题型: 编程题   语言: G++;GCC;VC
Description
从银行贷款金额为d，准备每月还款额为p，月利率为r。请编写程序输入这三个数值，计算并输出多少个月能够还清贷款，输出时保留1位小数。
如果无法还清，请输出“God”
计算公式如下：




输入格式
三个数，分别为货款金额、每月还款和月利率，以空格分隔，均为非负数，其中d，p，r>=0


输出格式
需要还款的月份


输入样例
50 50 0.01


输出样例
1.0
*/

/*
#include <stdio.h>
#include <math.h>
int main()
{
    double d,p,r,m;
    scanf("%lf%lf%lf",&d,&p,&r);
    if(d==0) printf("0.0");
    else if(d*r>=p) printf("God");
    else
    {
            m = log(p/(p-d*r))/log(1+r);
            printf("%.1lf",m);

    }
    return 0;
}
*/
