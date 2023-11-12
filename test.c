#define _CRT_SECURE_NO_WARNINGS 1
#pragma pack(4)//设置默认对齐数
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <ctype.h>
#include <assert.h>
#include <stddef.h>//offsetof
#pragma pack()//取消设置默认对齐数



//位段-------二进制位------节省空间
//成员必须是int /unsigned int /signed int

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





//结构体对齐规则------空间换时间--------尽量让空间小的成员集中在一起
//1第一个成员在与结构体变量偏移量为0的地址处
//2其他成员要对齐到某个数字对齐数的整数倍的地址处
//3结构体总大小为最大对齐数(每个成员变量都有一个对齐数)的整数倍
//4如果嵌套了结构体的情况，嵌套的结构体对齐到自己的最大对齐数的整数倍处，结构体的整体大小
//就是所有最大对齐数（含嵌套结构体的对齐数）的整数倍
//对齐数==编译器默认的一个对齐数与该成员大小的较小值
//VS的默认值为8

//建议调用结构体用传地址模式节省空间+const防止结构体被破坏
//struct s
//{
//	char c;
//	int i;
//	double d;
//};
//int main()
//{
//	printf("%d\n", offsetof(struct s, c));//查看结构体变量偏移量
//	printf("%d\n", offsetof(struct s, i));//宏定义
//	printf("%d\n", offsetof(struct s, d));
//	return 0;
//
//}



















//内存操作函数
//void* memcpy(void* dest, const void* src, size_t num);
//C语言标准
//memcpy 只要处理 不重叠内存拷贝就可以
//memmove 处理重叠内存的拷贝
  
//int memcmp(const void* ptr1,const void* ptr2,size_t num);

//void* memset(void* dest,int c,size_t count);操作单位是字节byte
//设置内容


//void* my_memmove(void* dest, const void* src, size_t num)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	void* ret = dest;
//	if (dest < src)
//	{
//		//前->后
//		while (num--)
//		{
//			*(char*)dest = *(char*)src;
//			++(char*)dest;
//			++(char*)src;
//		}
//	}
//	else
//	{
//		//后->前
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
//		++(char*)dest;		//优先级相同。右结合
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
//	//错误码 错误信息
//	//0 --   No error
//	//1 --   Operation not permitted
//	//2 --   No such file or directory
//	//...
//	//errno 是一个全局的错误码的变量
//	//当c语言的库函数在执行过程中,发生了错误,就会把对应的错误码,赋值到errno中
//
//	//char* str = strerror(errno);
//	//printf("%s\n",str);
//
//	//打开文件
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


//strtok会破坏源字符串
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
//	//点分十进制表示方式
//	char arr[] = "192.28.61.132";
//	char* p = ".";
//	
//	char buf1[1024] = { 0 };
//	strcpy(buf1, arr1);
//
//	char buf[1024] = { 0 };
//	strcpy(buf, arr);
//	//切割buf的字符串
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









