/*
18051 ������
ʱ������:1000MS  ���볤������:10KB
�ύ����:0 ͨ������:0

����: �����   ����: G++;GCC;VC
Description
������������a��b��c������a<=b<=c������a^2+b^2=c^2������^��ʾ�ϱ꣬����������Ϊ���������������磺3��4��5�ǹ�������������������n�����й�������



�����ʽ
����һ����(n<=100)


�����ʽ
������й�����������1��������С�������У�����1��������ͬ������2�������ţ�


��������
16


�������
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
//���
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
