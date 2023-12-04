#define _CRT_SECURE_NO_WARNINGS 1
/*8640 希尔(shell)排序
时间限制 : 1000MS  代码长度限制 : 10KB
提交次数 : 1858 通过次数 : 1304

题型 : 编程题   语言 : G++; GCC
Description
用函数实现希尔(shell)排序，并输出每趟排序的结果, 初始增量d = n / 2, 其后d = d / 2



输入格式
第一行：键盘输入待排序关键的个数n
第二行：输入n个待排序关键字，用空格分隔数据


输出格式
每行输出一趟排序结果，数据之间用一个空格分隔


输入样例
10
5 4 8 0 9 3 2 6 7 1


输出样例
3 2 6 0 1 5 4 8 7 9
1 0 3 2 4 5 6 8 7 9
0 1 2 3 4 5 6 7 8 9
*/

#include <stdio.h>
#include <stdlib.h>


int main()
{

	return 0;
}





//int main()
//{
//	int n, i, j;
//	scanf("%d", &n);
//	int* Dinsert = (int*)malloc(sizeof(int) * n);
//	for (i = 0; i < n; i++)
//		scanf("%d", Dinsert + i);
//	for (i = 0; i < n - 1; i++)
//	{
//		int end = i;
//		int tmp = Dinsert[end + 1];
//		while (end >= 0 && tmp < Dinsert[end])
//		{
//			Dinsert[end + 1] = Dinsert[end];
//			end--;
//		}
//		Dinsert[end + 1] = tmp;
//		for (j = 0; j < n; j++)
//			printf("%d ", Dinsert[j]);
//		printf("\n");
//	}
//	return 0;
//}
//int main()
//{
//	int n, i, j;
//	scanf("%d", &n);
//	int* shell = (int*)malloc(sizeof(int) * n);
//	for (i = 0; i < n; i++)
//		scanf("%d", shell + i);
//	int d = n / 2;
//	while (d >= 1)
//	{
//		for (i = 0; i < n - d; i++)
//		{
//			int end = i;
//			int tmp = shell[end + d];
//			while (end >= 0 && tmp < shell[end])
//			{
//				shell[end + d] = shell[end];
//				end -= d;
//			}
//			shell[end + d] = tmp;
//		}
//		d /= 2;
//		for (i = 0; i < n; i++)
//			printf("%d ", shell[i]);
//		printf("\n");
//	}
//
//	return 0;
//}








