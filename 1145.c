/*
1145 ���Ĵ�
ʱ������:1000MS  ���볤������:10KB
�ύ����:4977 ͨ������:2922

����: �����   ����: G++;GCC
Description
����һ���ַ�����������80���ַ����Իس����������жϸ��ַ����Ƿ�Ϊ���Ĵ�������������ƴд���

������ƴд��һ���ģ����������Y�����������N��



�����ʽ
һ���ַ���


�����ʽ
�������Y�����������N


��������
abba


�������
Y


��ʾ
��
input:
abcba

output:
Y

��
input:
abc

output:
N
*/
/*

#include <stdio.h>
#include <string.h>

int main()
{
    char str[81] = {0};
    gets(str);

    int left=0,right=strlen(str)-1;

    while(left<right)
    {
        if(str[left]!=str[right])
        {
            printf("N");
            return 0;
        }
        left++;
        right--;
    }
    printf("Y");

    return 0;
}
*/
