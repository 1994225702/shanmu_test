/*
1137 ������Ҫ�������
ʱ������:1000MS  ���볤������:10KB
�ύ����:6079 ͨ������:2986

����: �����   ����: G++;GCC
Description
���1��9999���ܱ�7����������������һλ������5����������



�����ʽ
һ��һ��


�������
35
56
105
154
......

*/

/*
#include <stdio.h>

int main()
{
    int i;
    for(i=1;i<10000;i++)
    {
        int tmp=i;
        if(i%7==0)
        {
            int flag=0;
            while(tmp)
            {
                if(tmp%10==5)
                {
                    flag=1;
                    break;
                }
                tmp/=10;
            }
            if(flag) printf("%d\n",i);
        }

    }

    return 0;
}
*/
