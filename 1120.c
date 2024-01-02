/*
1120 判断点是否在圆上
时间限制:1000MS  代码长度限制:10KB
提交次数:7688 通过次数:3305

题型: 编程题   语言: G++;GCC
Description
由键盘输入一个点的坐标, 要求编程判断这个点是否在单位圆(圆心在坐标0,0)上，点在圆上输出Y, 不在圆上输出N。
使用小数点后3位精度进行判断。



输入样例
0.707,0.707


输出样例
Y
*/
/*
#include <stdio.h>
#include <math.h>
int main()
{
    double x,y;
    scanf("%lf,%lf",&x,&y);

    if(fabs(sqrt(x*x+y*y)-1)<1e-3)
        printf("Y");
    else printf("N");

    return 0;
}
*/
