#define _CRT_SECURE_NO_WARNINGS 1



#include <stdio.h>
#include "math.h"
#include <string.h>



int main()
{

	return 0;
}













//小明对数字很在乎，如果抽签抽到一个幸运数，他会高兴一整天。对小明来说，幸运数是数中至少包含一个8，但不能有4。请编程输出1到1000中所有的幸运的数，
//按由小到大的顺序一行一个输出。

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

//输入一个位数不多于9位的正整数，将其构成的数码重新组合，输出可以组合出的最小数。
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







//10000的阶乘是一个很大的数字，但这一次我们关心的不是这个数字是多少，而是这个数字从个位开始向左直到第一个不为零的数字一共有多少个零。比如5的阶乘是120，
//有1个零，10的阶乘是3628800，有2个零。现给你若干个数，这些数各有多少个零。


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











//实现由键盘输入n(n<50)个点的坐标x,y(x,y<1000)，计算出最近两个点的距离。（保留三位小数）

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








//由键盘输入m和n，计算组合数，公式如下：

//C = F(m) / (F(m - n) * F(n))

//所有数字在整数范围内



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







//给定一个数N，可以计算该数所有因子(除它本身之外)的和，如12的因子和为16，现给定一个和，
//求1～10000之间所有可得到该和的数，按由小到大，一行一个输出。

//注：能整除N的数称为N的因子


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











