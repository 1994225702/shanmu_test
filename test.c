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

//联合体/共用体
//联合体大小至少是最大成员的大小
//当最大成员大小不是最大对齐数的整数倍的时候，就要对齐到最大对齐的整数倍
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
//	printf("%d", *(char*)&a);//小端字节序数据存储模式
//	return 0;
//}







//枚举类型
//1增加了代码的可读性和可维护性
//2和#define定义的标识符比较枚举有类型检查，更加严谨
//3防止了命名污染
//4便于调试
//5使用方便，一次可以定义多个变量
//enum SEX
//{
//	//枚举的可能取值-常量
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
//  printf("%d",sizeof(enum));//4---int 类型大小
//	return 0;
//}
