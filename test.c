#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
  

//int main()
//{//由键盘输入正数n（n<10），要求输出如下中间数字为n的2*n-1菱形图案
//	int i, j, k,l,n;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)//打印上半部分
//	{
//		for (j = n - 1-i; j > 0; j--)
//		{
//			printf(" ");//打印空格
//		}
//		for (k = 1;k<=i+1;k++)
//		{
//			printf("%d", k);//打印前半段digit
//		}
//		for (l = i;l>0;l--)
//		{
//			printf("%d", l);//打印后半段digit
//		}
//		printf("\n");//每行换行
//	}
//	for (i = n - 1; i > 0; i--)//打印下半部分
//	{
//		for (j = 0; j < n - i; j++)
//		{
//			printf(" ");//打印空格
//		}
//		for (k = 1; k <= i; k++)//打印前半段digit
//		{
//			printf("%d", k);
//		}
//		for (l = i-1; l > 0; l--)//打印后半段digit
//		{
//			printf("%d", l);
//		}
//		printf("\n");//每行换行
//	}
//	return 0;
//}


//int main()
//{//由键盘输入一个3＊4的矩阵，要求输出它的转置矩阵
//	int i,j,a[3][4],b[4][3];
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			scanf("%d", &a[i][j]);//输入矩阵
//		}
//	}
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			b[j][i] = a[i][j];//转置矩阵
//		}
//	}
//	for (i = 0; i < 4; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			printf("%d ", b[i][j]);//输出矩阵
//		}
//		printf("\n");
//	}
//	return 0;
//}

//qsort --可以对任意排序

//int main()
//{
//	int arr[10] = { 0 };
//	int(*p)[10] = &arr;//取出数组的地址
//
//	int (*pf)(int, int);//函数指针
//	int (*pfArr[4])(int, int);//pfArr是一个数组-函数指针的数组
//	//ppfArr是一个指向[函数指针数组]的指针
//	int (*(*ppfArr)[4])(int, int) = &pfArr;
//	//ppfArr是一个数组指针，指针指向的数组有4个元素
//	//每个元素的类型是一个函数指针 int(*)(int,int)
//	return 0;
//}








//计算器
//void menu()
//{
//	printf("**************************\n");
//	printf("** 1.Add          2.Sub **\n");
//	printf("** 3.Mul          4.Div **\n");
//	printf("** 5.Xor          0.Exit**\n");
//	printf("**************************\n");
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int Xor(int x, int y)
//{
//	return x ^ y;
//}
//void Calc(int (*pf)(int, int))
//{
//	int x, y;
//	printf("请输入操作数:");
//	scanf("%d%d", &x, &y);
//	printf("%d\n", pf(x, y));
//}
//int main()
//{//回调函数---调用函数
//	int input;
//	do {
//		menu();
//		printf("请选择算法:");
//		scanf("%d", &input);
//			
//		switch (input)
//		{
//		case 1:
//			Calc(Add);
//			break;
//		case 2:
//			Calc(Sub);
//			break;
//		case 3:
//			Calc(Mul);
//			break;
//		case 4:
//			Calc(Div);
//			break;
//		case 5:
//			Calc(Xor);
//			break;
//		case 0:
//			printf("退出\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//
//	} while (input);
//
//	return 0;
//}
//int main()
//{
//	int input, x, y;//函数指针数组的应用--转移表
//	int (*pfArr[])(int, int) = { 0,Add,Sub,Mul,Div,Xor };
//	do {
//		menu();
//		printf("请选择算法:");
//		scanf("%d", &input);
//		if (input > 0 && input <= 5)
//		{
//			printf("请输入操作数:");
//			scanf("%d%d", &x, &y);
//			int ret = pfArr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("退出\n");
//		}
//		else
//			printf("弄啥嘞\n");
//	} while (input);
//
//	return 0;
//}
//int main()
//{
//	int input, x, y;
//	do {
//		menu();
//		printf("请选择算法:");
//		scanf("%d", &input);
//		if(input!=0)
//		{
//			printf("请输入操作数:");
//			scanf("%d%d", &x, &y);
//		}
//		switch (input)
//		{
//		case 1:
//			printf("%d\n",Add(x,y));
//			break;
//		case 2:
//			printf("%d\n", Sub(x, y));
//			break; 
//		case 3:
//			printf("%d\n", Mul(x, y));
//			break;
//		case 4:
//			printf("%d\n", Div(x, y));
//			break;
//		case 5:
//			printf("%d\n", Xor(x, y));
//			break;
//		case 0:
//			printf("退出\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//
//	} while (input);
//
//	return 0;
//}

//char* my_strcpy(char* dest, const char* src)
//{
//
//}
//int main()
//{
//	char* (*pf)(char*, const char*) = my_strcpy;
//	char* (*pfArr[4])(char*, const char*) = { my_strcpy,my_strcpy,my_strcpy ,my_strcpy };
//	return 0;
//}


//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	//指针数组
//	int* arr[] = { 0 };
//	//函数指针数组
//	int (*pa)(int, int) = Add;
//	int (*parr[4])(int, int) = { Add,Sub,Mul,Div };
//	int i;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d ", parr[i](2, 3));
//	}
//	return 0;
//}


