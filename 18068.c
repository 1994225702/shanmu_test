/*
18068 ѡ������
ʱ������:1000MS  ���볤������:10KB
�ύ����:0 ͨ������:0

����: �����   ����: G++;GCC;VC
Description
����10����������дһ��ʵ�ֶ��������ѡ������ĺ���




�����ʽ
10���������Կո�ָ�


�����ʽ
������10��������һ��һ������


��������
3 2 1 6 5 4 9 8 7 0


�������
0
1
2
3
4
5
6
7
8
9
*/

/*

#include <stdio.h>

int sort(int a[], int n)
{
    int i,j,k,tmp;
    for(i=0;i<n-1; i++)
    {
        k=i;
        for(j=i+1;j<n;j++)
            if(a[k]>a[j]) k=j;
        tmp=a[k];a[k]=a[i];a[i]=tmp;
    }
}

int main()
{
    int a[10];
    int i;
    for(i=0; i<10; i++) scanf("%d", &a[i]);
    sort(a,10);
    for(i=0; i<10; i++) printf("%d\n", a[i]);
    return 0;
}

*/
