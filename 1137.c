/*
1137 找满足要求的数字
时间限制:1000MS  代码长度限制:10KB
提交次数:6079 通过次数:2986

题型: 编程题   语言: G++;GCC
Description
输出1到9999中能被7整除，而且至少有一位数字是5的所有数字



输出格式
一行一个


输出样例
35
56
105
154
......

*/

/*
#include <stdio.h>

int main()
{
    int i;
    for(i=1;i<10000;i++)
    {
        int tmp=i;
        if(i%7==0)
        {
            int flag=0;
            while(tmp)
            {
                if(tmp%10==5)
                {
                    flag=1;
                    break;
                }
                tmp/=10;
            }
            if(flag) printf("%d\n",i);
        }

    }

    return 0;
}
*/
