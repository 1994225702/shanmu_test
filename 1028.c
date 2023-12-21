/*
1028 求素数
时间限制:1000MS  代码长度限制:10KB
提交次数:4562 通过次数:3274

题型: 编程题   语言: G++;GCC
Description
输出2到200之间（包括2、200）的所有素数（注：要求1行1个素数，按由小到大的顺序输出）。



输入样例
（无）


输出样例
2
3
5
7
……
199

*/
/*
#include <stdio.h>
#include <math.h>
int main()
{
    int i;
    for(i=2;i<200;i++)
    {
        int flag = 1;
        for(int j=2;j<=sqrt(i);j++)
            if(i%j==0)
        {
            flag=0;
            break;
        }
        if(flag)
            printf("%d\n",i);
    }


    return 0;
}
*/
