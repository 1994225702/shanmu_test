/*
1037 计算数列和
时间限制:1000MS  代码长度限制:10KB
提交次数:5299 通过次数:3882

题型: 编程题   语言: G++;GCC
Description 有数列：

编程实现，由键盘输入n，计算输出数列前n项和。（结果保留四位小数，提示：要使用double，否则精度不够）


输出格式
请按格式输出


输入样例
20


输出样例
32.6603
*/
/*
#include <math.h>

int main()
{
    double den=1,mol=2;
    double sum = 0;

    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        sum+=mol/den;


        mol = mol+den;
        den = mol-den;
    }
    printf("%.4lf",sum);


    return 0;
}
*/
