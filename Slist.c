#define _CRT_SECURE_NO_WARNINGS 1
/*8640 ϣ��(shell)����
ʱ������ : 1000MS  ���볤������ : 10KB
�ύ���� : 1858 ͨ������ : 1304

���� : �����   ���� : G++; GCC
Description
�ú���ʵ��ϣ��(shell)���򣬲����ÿ������Ľ��, ��ʼ����d = n / 2, ���d = d / 2



�����ʽ
��һ�У��������������ؼ��ĸ���n
�ڶ��У�����n��������ؼ��֣��ÿո�ָ�����


�����ʽ
ÿ�����һ��������������֮����һ���ո�ָ�


��������
10
5 4 8 0 9 3 2 6 7 1


�������
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








