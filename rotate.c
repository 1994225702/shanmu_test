/*
16  ��ת����
Time Limit:1000MS  Memory Limit:65535K
����: �����   ����: G++;GCC
����
����һ��N�е������ַ����Ρ�
ʵ�ֽ���������˳ʱ����תW�ȣ�W��90�ȵı�����

�����ʽ
��һ��������N��NС�ڵ���10
֮����N�е��������Σ������ַ��޷ָ�
���һ����һ���Ǹ���������ʾ��תW�ȣ�W��90�ı���
�����ʽ
��ת������Σ�����֮�䲻�ָ�
��������
5
  1
 234
56789
 321
  3
90
�������
  5
 362
32731
 184
  9

  */


#include <stdio.h>
#include <string.h>

int main()
{
    int i,j,N,k=0;;
    char Lin[10][10]={0},tmp[10][10]={0};
    scanf("%d",&N);
/*
    t=N/2;
    for(i=-t;i<=t&&k<N;i++,k++)
    {
        for(j=abs(i);j<=N-abs(i);j++)
            scanf("%c",&Lin[k][j]);

    }*/
    gets(tmp);          //����Ҫ***************�뻺������ȡ�йأ��Ѷ����space����
    for(i=0;i<N;i++)
    {

        gets(Lin[i]);

        /*for(j=0;j<N;j++)
        {
            scanf("%c",&Lin[i][j]);
            if(Lin[i][j]=='\n')
                break;
        }*/
    }
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            if(!isdigit(Lin[i][j]))
            {
                Lin[i][j]=' ';
            }
        }
    }
    int angle;
    scanf("%d",&angle);
    angle%=360;
    angle/=90;
    for(int k=0;k<angle;k++)
    {
        for(i=0;i<N;i++)
        {
            for(j=0;j<N;j++)
            {
                tmp[i][j]=Lin[N-1-j][i];
            }
        }
        for(i=0;i<N;i++)
        {
            for(j=0;j<N;j++)
            {
                Lin[i][j]=tmp[i][j];
            }
        }
    }
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            printf("%c",Lin[i][j]);
        }
        printf("\n");
    }

    return 0;
}
