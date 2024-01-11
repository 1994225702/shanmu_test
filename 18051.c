/*
18051 勾股数
时间限制:1000MS  代码长度限制:10KB
提交次数:0 通过次数:0

题型: 编程题   语言: G++;GCC;VC
Description
若三个正整数a、b、c，其中a<=b<=c，满足a^2+b^2=c^2，其中^表示上标，称这三个数为“勾股数”，例如：3、4、5是勾股数。编程输出不大于n的所有勾股数。



输入格式
输入一个数(n<=100)


输出格式
输出所有勾股数，按第1个数字由小到大排列（若第1个数字相同，按第2个数字排）


输入样例
16


输出样例
3 4 5
5 12 13
6 8 10
9 12 15
*/
/*
#include <stdio.h>

int main()
{
    int i,j,k,n;
    scanf("%d",&n);

    for(i=3;i<=n;i++)
    {
        for(j=3;j<=n;j++)
        {
            for(k=3;k<=n;k++)
            {
                if(i*i+j*j==k*k&&i<=j&&j<=k)
                    printf("%d %d %d\n",i,j,k);
            }
        }
    }
    return 0;
}
*/
/*
//标程
#include <stdio.h>
#include <math.h>

int main()
{
    int i,j,k,n;
    scanf("%d", &n);
    for(i=1; i<=n; i++)
        for(j=i; j<=n; j++)
        {
                k=(int)sqrt(i*i+j*j);
                if(k*k==i*i+j*j && k<=n)
                printf("%d %d %d\n", i,j,k);
        }
    return 0;
}
*/
