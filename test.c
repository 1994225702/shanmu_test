#define _CRT_SECURE_NO_WARNINGS 1



//#include <stdio.h>
#include<stdio.h>
int main()
{
    int a, n, m, x;
    scanf("%d%d%d%d", &a, &n, &m, &x);

    int sum1[25], sum2[25];

    sum1[2] = 1, sum1[3] = 2;

    for (int i = 4; i < n; i++)
    {
        sum1[i] = sum1[i - 1] + sum1[i - 2] - 1;
        sum2[i] = sum2[i - 1] + sum2[i - 2] + 1;
    }

    int b = (m - a * sum1[n - 1]) / sum2[n - 1];
    printf("%d", a * sum1[x] + b * sum2[x]);

    return 0;
}

//������/������
//�������С����������Ա�Ĵ�С
//������Ա��С����������������������ʱ�򣬾�Ҫ���뵽�������������
//union Un
//{
//	char c;
//	int i;
//}u1;
//
//
//int main()
//{
//	u1.c = 'n';
//	u1.i = 7;
//	printf("%d\n", u1.c);
//	printf("%d\n", u1.i);
//	int a = 1;
//	printf("%d", *(char*)&a);//С���ֽ������ݴ洢ģʽ
//	return 0;
//}







//ö������
//1�����˴���Ŀɶ��ԺͿ�ά����
//2��#define����ı�ʶ���Ƚ�ö�������ͼ�飬�����Ͻ�
//3��ֹ��������Ⱦ
//4���ڵ���
//5ʹ�÷��㣬һ�ο��Զ���������
//enum SEX
//{
//	//ö�ٵĿ���ȡֵ-����
//	MALE = 1,
//	FEMALE =3,
//	SECRET = 8
//};
//
//enum Color
//{
//	RED,
//	Green = 7,
//	Blue
//};
//int main()
//{
//	enum SEX s = MALE;
//
//	printf("%d %d %d ", MALE, FEMALE, SECRET);
//	printf("%d %d %d", RED, Green, Blue);
//  printf("%d",sizeof(enum));//4---int ���ʹ�С
//	return 0;
//}
