/*
18058 һ��ĵڼ���
ʱ������:1000MS  ���볤������:10KB
�ύ����:0 ͨ������:0

����: �����   ����: G++;GCC;VC
Description
����һ���ṹ�����ͱ�ʾ�������ͣ������ꡢ�¡��գ��������ж���һ���������͵ı�������������ڵ��ꡢ�¡��գ�
���㲢�����������һ��ĵڼ��졣



�����ʽ
�����գ���ʽ������


�����ʽ
����ĵڼ���


��������
2015-1-1


�������
1
*/

/*
#include <stdio.h>

struct DATE
{
    int year;
    int month;
    int day;
};

int days(struct DATE date)
{
    int DAY[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    if(date.year%400==0||date.year%4==0&&date.year%100!=0)
        DAY[1]=29;
    int sum=0;
    for(int i=0;i<date.month-1;i++)
        sum+=DAY[i];
    return sum+=date.day;
}

int main()
{
    struct DATE d;
    scanf("%d-%d-%d", &d.year, &d.month, &d.day);
    printf("%d", days(d));
}
*/
