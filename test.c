#define _CRT_SECURE_NO_WARNINGS 1
#pragma pack(4)//����Ĭ�϶�����
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <ctype.h>
#include <assert.h>
#include <stddef.h>//offsetof
#pragma pack()//ȡ������Ĭ�϶�����



//λ��-------������λ------��ʡ�ռ�
//��Ա������int /unsigned int /signed int

struct S
{
	int a : 2;
	int b : 10;
	int c : 8;
	int d : 20;
};
int main()
{
	struct S s;

	printf("%d\n", sizeof(s));
	return 0;
}





//�ṹ��������------�ռ任ʱ��--------�����ÿռ�С�ĳ�Ա������һ��
//1��һ����Ա����ṹ�����ƫ����Ϊ0�ĵ�ַ��
//2������ԱҪ���뵽ĳ�����ֶ��������������ĵ�ַ��
//3�ṹ���ܴ�СΪ��������(ÿ����Ա��������һ��������)��������
//4���Ƕ���˽ṹ��������Ƕ�׵Ľṹ����뵽�Լ������������������������ṹ��������С
//��������������������Ƕ�׽ṹ��Ķ���������������
//������==������Ĭ�ϵ�һ����������ó�Ա��С�Ľ�Сֵ
//VS��Ĭ��ֵΪ8

//������ýṹ���ô���ַģʽ��ʡ�ռ�+const��ֹ�ṹ�屻�ƻ�
//struct s
//{
//	char c;
//	int i;
//	double d;
//};
//int main()
//{
//	printf("%d\n", offsetof(struct s, c));//�鿴�ṹ�����ƫ����
//	printf("%d\n", offsetof(struct s, i));//�궨��
//	printf("%d\n", offsetof(struct s, d));
//	return 0;
//
//}



















//�ڴ��������
//void* memcpy(void* dest, const void* src, size_t num);
//C���Ա�׼
//memcpy ֻҪ���� ���ص��ڴ濽���Ϳ���
//memmove �����ص��ڴ�Ŀ���
  
//int memcmp(const void* ptr1,const void* ptr2,size_t num);

//void* memset(void* dest,int c,size_t count);������λ���ֽ�byte
//��������


//void* my_memmove(void* dest, const void* src, size_t num)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	void* ret = dest;
//	if (dest < src)
//	{
//		//ǰ->��
//		while (num--)
//		{
//			*(char*)dest = *(char*)src;
//			++(char*)dest;
//			++(char*)src;
//		}
//	}
//	else
//	{
//		//��->ǰ
//		while (num--)
//		{
//			*((char*)dest + num) = *((char*)src + num);
//		}
//	}
//	return ret;
//}


//void* my_memcpy(void* dest, const void* src, size_t num)
//{
//	void* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		++(char*)dest;		//���ȼ���ͬ���ҽ��
//		++(char*)src;
//	}
//	return ret;
//}
//int main()
//{
//	int arr[] = { 12,4,5,6 };
//	int arr1[10] = { 0 };
//
//	my_memcpy(arr1, arr, sizeof(arr));
//
//}



//int main()
//{
//	//������ ������Ϣ
//	//0 --   No error
//	//1 --   Operation not permitted
//	//2 --   No such file or directory
//	//...
//	//errno ��һ��ȫ�ֵĴ�����ı���
//	//��c���ԵĿ⺯����ִ�й�����,�����˴���,�ͻ�Ѷ�Ӧ�Ĵ�����,��ֵ��errno��
//
//	//char* str = strerror(errno);
//	//printf("%s\n",str);
//
//	//���ļ�
//	FILE* pf = fopen("test.txt", "r");
//
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//		printf("open file success\n");
//	char str[] = "hello world!";
//	fputs(str, pf);
//	fclose(pf);
//	return 0;
//}


//strtok���ƻ�Դ�ַ���
//char* strtok(char* str,const char* sep);
// 192.28.61.132
//192 28 61 132
//bit@163.cn
//bit 163 cn
//int main()
//{
//	char arr1[] = "bit@edu@.cpn@n";
//	char* p1 = "@.";
//
//	//���ʮ���Ʊ�ʾ��ʽ
//	char arr[] = "192.28.61.132";
//	char* p = ".";
//	
//	char buf1[1024] = { 0 };
//	strcpy(buf1, arr1);
//
//	char buf[1024] = { 0 };
//	strcpy(buf, arr);
//	//�и�buf���ַ���
//	char* ret = NULL;
//
//	for (ret = strtok(buf1, p1); ret != NULL; ret = strtok(NULL, p1))
//	{
//		printf("%s\n", ret);
//	}
//
//	/*for (ret = strtok(buf, p); ret != NULL; ret = strtok(NULL, p))
//	{
//		printf("%s\n", ret);
//	}*/
//}









