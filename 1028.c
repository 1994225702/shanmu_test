/*
1028 ������
ʱ������:1000MS  ���볤������:10KB
�ύ����:4562 ͨ������:3274

����: �����   ����: G++;GCC
Description
���2��200֮�䣨����2��200��������������ע��Ҫ��1��1������������С�����˳���������



��������
���ޣ�


�������
2
3
5
7
����
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
