/*18062 ��ά����ÿ���е����ֵ
ʱ������:1000MS  ���볤������:10KB
�ύ����:0 ͨ������:0

����: �����   ����: G++;GCC;VC
Description
����һ��4*4�Ķ�ά�������飬ʹ��ָ��������Ҳ������ά����������ÿһ�е����ֵ��




�����ʽ
4*4����������


�����ʽ
ÿ�����ֵ��һ��һ��


��������
1 2 3 4
8 7 6 5
1 1 1 1
2 2 2 2


�������
4
8
1
2
*/
/*
#include <stdio.h>

void find(int a[][4])
{
    int (*p)[4], *q, *max;
    for(p=a;p<a+4;p++)
    {
        max=*p;
        for(q=*p+1;q<*p+4;q++)
        {
            if(*q>*max)
                max=q;
        }
        printf("%d\n", *max);
    }
}

int main()
{
    int a[4][4],i,j;
    for(i=0; i<4; i++)
        for(j=0; j<4; j++)
            scanf("%d", &a[i][j]);
    find(a);
    return 0;
}
*/