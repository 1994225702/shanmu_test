/*
18037 20����ʱ��
ʱ������:1000MS  ���볤������:10KB
�ύ����:0 ͨ������:0

����: �����   ����: G++;GCC
Description
��д��������������������hour��Сʱ����minute�����ӣ���second���룩����һ��ʱ�䣬
�����ʱ��20���Ժ��ʱ�䡣



�����ʽ
һ�������������ֱ����Сʱ�����ӡ��룬�м�ʹ��ð�ŷָ�


�����ʽ
���һ��ʱ�䣬���ּ���ð�ŷָ�
Сʱ�����ӡ����ռ��������λ������λ��0����


��������
15:30:41


�������
15:31:01
*/

/*
#include <stdio.h>
#include <assert.h>
int main()
{
    int hour,minute,second;
    scanf("%d:%d:%d",&hour,&minute,&second);

    assert(hour>=0&&hour<24);
    assert(minute>=0&&minute<60);
    assert(second>=0&&second<60);

    second+=20;
    if(second>=60)
    {
        second%=60;     //ȡ�������Ӧ��
        minute++;
        if(minute==60)
        {
            minute=0;
            hour++;
            if(hour==24)
                hour=0;
        }
    }
    printf("%02d:%02d:%02d",hour,minute,second);

    return 0;
}


*/
