/*
18054 �����ͬ����
ʱ������:1000MS  ���볤������:10KB
�ύ����:0 ͨ������:0

����: �����   ����: G++;GCC;VC
Description
����10��������������в�ͬ�����������һ���������˶�Σ�ֻ���һ�Ρ�



�����ʽ
����10������


�����ʽ
���������ͬ�����֣�һ��һ�������ϵ�����������ȳ��ֵ�����


��������
1 2 1 3 3 2 4 5 5 9


�������
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
    int s[15]={0},vis[10005]={0},i;//��Ҫ�뵱Ȼ��Ϊ���������Ҳ���޶���10��,����vis�����
    for(i=1;i<=10;i++)
    {
        scanf("%d",&s[i]);
        if(vis[s[i]]==0)//û������������������
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
    //˼·2 ��ӡ���ظ���

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





    //˼·1 ��ǰ������Ƚ�
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
