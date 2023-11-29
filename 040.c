#define _CRT_SECURE_NO_WARNINGS 1

//代码注释
//尽量使用const
#include <assert.h>
#include <stdio.h>


void main()
{
	int i,k=0;
	int ip[4] = { 0 };
	char tmp[33];
	printf("输入:");
	scanf("%s", tmp);

	for (i = 0; i < 32; i += 8)
	{
		for (int j = i; j < i + 8; j++)
		{
			ip[k] = ip[k] * 2 + tmp[j]-'0';
		}
		k++;
	}
	printf("IP 地址:");
	printf("%d.%d.%d.%d", ip[0], ip[1], ip[2], ip[3]);
}







