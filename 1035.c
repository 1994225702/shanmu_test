/*
1035 ��ӡ����ͼ��
ʱ������:1000MS  ���볤������:10KB
�ύ����:4874 ͨ������:3064

����: �����   ����: G++;GCC
Description
�ɼ�����������n��n<30����Ҫ���������2*n+1�е�����ͼ����



�����ʽ
�����ұ߲�������ո�


��������
2


�������
  *
 ***
*****
 ***
  *

  */
/*
  #include <stdio.h>
  #include <math.h>
  int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=-n;i<=n;i++)
    {
        for(j=abs(i);j>0;j--)
            printf(" ");
        for(j=2*(n-abs(i))+1;j>0;j--)
        {
            printf("*");
        }
        printf("\n");

    }
    return 0;
}
*/
