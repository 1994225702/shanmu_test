/*
18050 ��ӡ������
ʱ������:1000MS  ���볤������:10KB
�ύ����:0 ͨ������:0

����: �����   ����: G++;GCC;VC
Description
��д������������n�����n�е��ַ�ͼ��������n=5ʱ�����
    *
   **
  ***
 ****
*****
 ****
  ***
   **
    *




�����ʽ
����һ������


�����ʽ
���2*n-1�е�������


��������
2


�������
 *
**
 *

 */
/*
 #include <stdio.h>
 #include <math.h>
 int main()
{
    int n,i,j;
    scanf("%d",&n);

    for(i=-(n-1);i<=n-1;i++)
    {
        for(j=abs(i);j>0;j--)
            printf(" ");
        for(j=n-abs(i);j>0;j--)
            printf("*");
        printf("\n");
    }

    return 0;
}
*/
/*
#include <stdio.h>
#define abs(x) ((x)>=0?(x):-(x))

int main()
{
    int n,i,j;
    scanf("%d", &n);
    for(i=-(n-1); i<=(n-1); i++)
    {
        for(j=0; j<abs(i); j++)
            printf(" ");
        for(j=0; j<n-abs(i); j++)
            printf("*");
        printf("\n");
    }
    return 0;
}
*/
