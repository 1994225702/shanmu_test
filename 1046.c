/*
1046 ����߾��ȼӷ�
ʱ������:1000MS  ���볤������:10KB
�ύ����:4771 ͨ������:1813

����: �����   ����: G++;GCC
Description
�ɼ�����������λ���ܳ���������һ��һ������಻����80λ�����Լ��㲢������������ĺ͡�



��������
1234567890123456789353534532453453453434534
987654321098765324534534534534532


�������
1234567891111111110452299856987987987969066


��ʾ
ע�⣬һ����ͨ�ı������ܱ���ʮ��λ��������

*/


//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//    char num1[81]={0},num2[81]={0};
//    int digit[82]={0};
//    gets(num1);
//    gets(num2);
//
//    int left=0,len1=strlen(num1);
//    int right=len1-1;
//    int len2=strlen(num2);
//
//    while(left<right)
//    {
//        int tmp=num1[left];
//        num1[left] = num1[right];
//        num1[right] =tmp;
//        left++;
//        right--;
//    }
//    left=0,right=len2-1;
//    while(left<right)
//    {
//        int tmp=num2[left];
//        num2[left] = num2[right];
//        num2[right] =tmp;
//        left++;
//        right--;
//    }
//    int i,tmp=0,max=(len1>len2?len1:len2);
//    for(i=0;i<max;i++)
//    {
//        if(num1[i]>='0')
//            num1[i]-='0';
//        if(num2[i]>='0')
//            num2[i]-='0';
//        digit[i]=(num1[i]+num2[i]+tmp)%10;      //ע����Ͻ���������ȡ����
//        tmp=(num1[i]+num2[i]+tmp)/10;           //************************
//
//
//    }
//
//    if(tmp)
//        printf("%d",tmp);
//    for(i=max-1;i>=0;i--)
//        printf("%d",digit[i]);
//
//    return 0;
//}



//���
//
//#include "stdio.h"
//#include "string.h"
//main()
//{   int a[100]={0},b[100]={0},c[100]={0};
//    char s[101];
//    int i=0,n1=0,n2=0,max=0,e=0;
//    gets(s);
//    n1=strlen(s);
//    for(i=n1-1;i>=0;i--) a[n1-1-i]=s[i]-'0';
//    gets(s);
//    n2=strlen(s);
//    for(i=n2-1;i>=0;i--) b[n2-1-i]=s[i]-'0';
//    if(n1>n2) max=n1;
//    else max=n2;
//    for(i=0;i<=max;i++)
//    {    c[i]=(a[i]+b[i]+e)%10;
//         e=(a[i]+b[i]+e)/10;
//    }
//	if(c[max]>0) printf("%d",c[max]);
//    for(i=max-1;i>=0;i--)
//    printf("%d",c[i]);
//}
