/*
18067 �ַ�ͳ��
ʱ������:1000MS  ���볤������:10KB
�ύ����:0 ͨ������:0

����: �����   ����: G++;GCC;VC
Description
��дһ��������ͳ��һ���ַ�������ĸ�����ֺͿո�ĸ�����ʹ��ȫ�ֱ��������ĸ�����ָ�������������ֵ�ǿո����




�����ʽ
����һ���ַ�����'\n'������


�����ʽ
ͳ�ƽ��


��������
Ab 45


�������
2 2 1
*/

/*

#include <stdio.h>
#include <string.h>
#include <math.h>

int nL=0, nN=0;

int statistics(char *s)
{
    int i=0,nS=0;
    while(s[i]!='\0')
    {

        if(isdigit(s[i]))
        {
            nN++;

        }
        else if(isalpha(s[i]))
        {
            nL++;

        }
        else if(s[i]==' ')
        {
            nS++;

        }
         i++;
    }
    return nS;
}

int main()
{
    char s[81];
    int nS;
    gets(s);
    nS = statistics(s);

    printf("%d %d %d\n", nL, nN, nS);
    return 0;
}
*/
