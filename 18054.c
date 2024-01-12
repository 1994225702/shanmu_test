/*
18054 输出不同的数
时间限制:1000MS  代码长度限制:10KB
提交次数:0 通过次数:0

题型: 编程题   语言: G++;GCC;VC
Description
输入10个整数，输出其中不同的数，即如果一个数出现了多次，只输出一次。



输入格式
输入10个整数


输出格式
依次输出不同的数字（一行一个，从上到下依次输出先出现的数）


输入样例
1 2 1 3 3 2 4 5 5 9


输出样例
1
2
3
4
5
9
*/

/*

#include <stdio.h>

int main()
{
    int s[15]={0},vis[10005]={0},i;//不要想当然以为输入的数字也是限定在10内,所以vis开大点
    for(i=1;i<=10;i++)
    {
        scanf("%d",&s[i]);
        if(vis[s[i]]==0)//没有输出过的数才能输出
        {
            printf("%d\n",s[i]);
            vis[s[i]]=1;
        }
    }
    return 0;
}

/*
#include <stdio.h>

int main()
{
    //思路2 拓印无重复数

    int i,j,max;
    int num[10] = {0};

    for(i=0;i<10;i++)
    {
        scanf("%d",&num[i]);
        if(i==0)
            max=num[i];
        else
        {
            if(max<num[i])
                max=num[i];
        }
    }

    int* digit = (int*)calloc(max+1,sizeof(int));
    for(i=0;i<10;i++)
    {
        digit[num[i]]=1;
    }
    for(i=0;i<=max;i++)
        if(digit[i])
        printf("%d\n",i);





    //思路1 与前面的数比较
    /*
    int i,j;
    int num[10]={0};
    for(i=0;i<10;i++)
    {
        int flag=1;
        scanf("%d",&num[i]);
        for(j=0;j<i;j++)
        {
            if(num[j]==num[i])
            {
                flag=0;
                break;
            }
        }
        if(flag)
            printf("%d\n",num[i]);
    }


    return 0;
}
*/
