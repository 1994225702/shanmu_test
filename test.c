#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
  

//int main()
//{//�ɼ�����������n��n<10����Ҫ����������м�����Ϊn��2*n-1����ͼ��
//	int i, j, k,l,n;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)//��ӡ�ϰ벿��
//	{
//		for (j = n - 1-i; j > 0; j--)
//		{
//			printf(" ");//��ӡ�ո�
//		}
//		for (k = 1;k<=i+1;k++)
//		{
//			printf("%d", k);//��ӡǰ���digit
//		}
//		for (l = i;l>0;l--)
//		{
//			printf("%d", l);//��ӡ����digit
//		}
//		printf("\n");//ÿ�л���
//	}
//	for (i = n - 1; i > 0; i--)//��ӡ�°벿��
//	{
//		for (j = 0; j < n - i; j++)
//		{
//			printf(" ");//��ӡ�ո�
//		}
//		for (k = 1; k <= i; k++)//��ӡǰ���digit
//		{
//			printf("%d", k);
//		}
//		for (l = i-1; l > 0; l--)//��ӡ����digit
//		{
//			printf("%d", l);
//		}
//		printf("\n");//ÿ�л���
//	}
//	return 0;
//}


//int main()
//{//�ɼ�������һ��3��4�ľ���Ҫ���������ת�þ���
//	int i,j,a[3][4],b[4][3];
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			scanf("%d", &a[i][j]);//�������
//		}
//	}
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			b[j][i] = a[i][j];//ת�þ���
//		}
//	}
//	for (i = 0; i < 4; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			printf("%d ", b[i][j]);//�������
//		}
//		printf("\n");
//	}
//	return 0;
//}

//qsort --���Զ���������

//int main()
//{
//	int arr[10] = { 0 };
//	int(*p)[10] = &arr;//ȡ������ĵ�ַ
//
//	int (*pf)(int, int);//����ָ��
//	int (*pfArr[4])(int, int);//pfArr��һ������-����ָ�������
//	//ppfArr��һ��ָ��[����ָ������]��ָ��
//	int (*(*ppfArr)[4])(int, int) = &pfArr;
//	//ppfArr��һ������ָ�룬ָ��ָ���������4��Ԫ��
//	//ÿ��Ԫ�ص�������һ������ָ�� int(*)(int,int)
//	return 0;
//}








//������
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
//	printf("�����������:");
//	scanf("%d%d", &x, &y);
//	printf("%d\n", pf(x, y));
//}
//int main()
//{//�ص�����---���ú���
//	int input;
//	do {
//		menu();
//		printf("��ѡ���㷨:");
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
//			printf("�˳�\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//
//	} while (input);
//
//	return 0;
//}
//int main()
//{
//	int input, x, y;//����ָ�������Ӧ��--ת�Ʊ�
//	int (*pfArr[])(int, int) = { 0,Add,Sub,Mul,Div,Xor };
//	do {
//		menu();
//		printf("��ѡ���㷨:");
//		scanf("%d", &input);
//		if (input > 0 && input <= 5)
//		{
//			printf("�����������:");
//			scanf("%d%d", &x, &y);
//			int ret = pfArr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("�˳�\n");
//		}
//		else
//			printf("Ūɶ��\n");
//	} while (input);
//
//	return 0;
//}
//int main()
//{
//	int input, x, y;
//	do {
//		menu();
//		printf("��ѡ���㷨:");
//		scanf("%d", &input);
//		if(input!=0)
//		{
//			printf("�����������:");
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
//			printf("�˳�\n");
//			break;
//		default:
//			printf("ѡ�����\n");
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
//	//ָ������
//	int* arr[] = { 0 };
//	//����ָ������
//	int (*pa)(int, int) = Add;
//	int (*parr[4])(int, int) = { Add,Sub,Mul,Div };
//	int i;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d ", parr[i](2, 3));
//	}
//	return 0;
//}


