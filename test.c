#define _CRT_SECURE_NO_WARNINGS 1



#include <stdio.h>
#include "math.h"
#include <string.h>



int main()
{

	return 0;
}













//С�������ֺ��ں��������ǩ�鵽һ�����������������һ���졣��С����˵�����������������ٰ���һ��8����������4���������1��1000�����е����˵�����
//����С�����˳��һ��һ�������

//int main()
//{
//	int i,tmp;
//	for (i = 1; i <= 1000; i++)
//	{
//		tmp = i;
//		int flag = 0;
//		while (tmp)
//		{
//			if (tmp % 10 == 8)
//			{
//				flag = 1;
//				break;
//			}
//			tmp /= 10;
//		}
//		tmp = i;
//		while (tmp)
//		{
//			if (tmp % 10 == 4)
//			{
//				flag = 0;
//				break;
//			}
//			tmp /= 10;
//		}
//		if (flag == 1)
//			printf("%d\n", i);
//	}
//	return 0;
//}

//����һ��λ��������9λ�������������乹�ɵ�����������ϣ����������ϳ�����С����
//int main()
//{
//	char num[10] = { 0 };
//	int i, j;
//	gets(num);
//	for (i = 0; i < strlen(num) - 1; i++)
//	{
//		for (j = 0; j < strlen(num) - 1 - i; j++)
//		{
//			if (num[j] > num[j + 1])
//			{
//				char tmp = num[j];
//				num[j] = num[j + 1];
//				num[j + 1] = tmp;
//			}
//		}
//	}
//	for (i = 0; i < strlen(num); i++)
//	{
//		if (num[i] != '0')
//			printf("%c", num[i]);
//	}
//	return 0;
//}







//10000�Ľ׳���һ���ܴ�����֣�����һ�����ǹ��ĵĲ�����������Ƕ��٣�����������ִӸ�λ��ʼ����ֱ����һ����Ϊ�������һ���ж��ٸ��㡣����5�Ľ׳���120��
//��1���㣬10�Ľ׳���3628800����2���㡣�ָ������ɸ�������Щ�����ж��ٸ��㡣


//int main()
//{
//	int i,N;
//	int tmp;
//	scanf("%d", &N);
//	for (i = 0; i < N; i++)
//	{
//		int count = 0;
//		scanf("%d", &tmp);
//		while (tmp)
//		{
//			count += (tmp / 5);
//			tmp /= 5;
//		}
//		printf("%d\n", count);
//	}
//	return 0;
//}











//ʵ���ɼ�������n(n<50)���������x,y(x,y<1000)����������������ľ��롣��������λС����

//double d(double x, double y, double m, double n) {
//    double i, j;
//    i = x - m;
//    j = y - n;
//    return i*i+j*j;
//}
//
//int main()
//{
//    int j, n, m;
//    double x[50], y[50];
//    double ff;
//    double min = -1;
//    scanf("%d", &n);
//    for (j = 0; j < n; j++)
//        scanf("%lf%lf", &x[j], &y[j]);
//
//    for (j = 0; j < n - 1; j++)
//    {
//        for (m = j + 1; m < n; m++)
//            if (min == -1 || d(x[j], y[j], x[m], y[m]) < min)
//                min = d(x[j], y[j], x[m], y[m]);
//    }
//    ff = sqrt(min);
//    printf("%.3f", ff);
//}








//�ɼ�������m��n���������������ʽ���£�

//C = F(m) / (F(m - n) * F(n))

//����������������Χ��



//int F(int x)
//{
//	if (x == 0) return 1;
//	else return x * F(x - 1);
//}
//
//
//int main()
//{
//	int m, n, C;
//	scanf("%d%d", &m, &n);
//	C = F(m) / (F(m - n) * F(n));
//	printf("%d", C);
//	return 0;
//}







//����һ����N�����Լ��������������(��������֮��)�ĺͣ���12�����Ӻ�Ϊ16���ָ���һ���ͣ�
//��1��10000֮�����пɵõ��ú͵���������С����һ��һ�������

//ע��������N������ΪN������


//int main()
//{
//	int i,N,j;
//	scanf("%d", &N);
//	for (i = 1; i <= 10000; i++)
//	{
//		int sum = 0;
//		for (j = 1; j < i; j++)
//		{
//			if (i % j == 0)
//				sum += j;
//		}
//		if (sum == N)
//			printf("%d\n", i);
//	}
//	return 0;
//}











