/*
1051 �Ҿ����еİ���
ʱ������:1000MS  ���볤������:10KB
�ύ����:5713 ͨ������:1874

����: �����   ����: G++;GCC
Description
�ɼ�������һ��3��4��3��4�У������־������������������־�����ͬ��Ҫ����������־����еİ��㣨���ھ����������������С��������
��û�а��㣬�����NO��������



��������
87  90  110  98
70  97  210  65
99  45  120  30


�������
110
*/
/*

#include <stdio.h>


int main()
{
    int mal[3][4] = {0};
    int i,j,col;
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            scanf("%d",&mal[i][j]);
        }
    }

    for(i=0;i<3;i++)
    {
        int max=mal[i][0];
        for(j=1;j<4;j++)
        {
            if(max<mal[i][j])
            {
                max=mal[i][j];
                col=j;
            }
        }
        if(max<=mal[0][col]&&max<=mal[1][col]&&max<=mal[2][col])
        {
            printf("%d",max);
            return 0;
        }
    }
    printf("NO");
    return 0;
}

*/
