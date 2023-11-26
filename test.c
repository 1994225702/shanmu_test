#define _CRT_SECURE_NO_WARNINGS 1


#include <string.h>
#include <stdio.h>
//#include <assert.h>
#include <math.h>
int Isprime(int n)
{
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
			return 0;
	}
	return 1;
}
int main()
{
	int num,t=1;
	int flag = 0;
	scanf("%d", &num);
	int temp = num;
	while (temp/=10)
	{
		t++;
	}
	t = pow(10, t);
	for (int i = 2; i <= 100000; i++)
	{
		if (Isprime(i))
		{
			int tmp = i;
			while (tmp >= num)
			{
				if (tmp %t  == num)
				{
					printf("%d\n", i);
					break;
				}
				tmp /= 10;
				flag = 1;
			}
		}
	}
	if (!flag)
		printf("N");
	return 0;
}
//int main()
//{
//	char dst,cht,ch = getchar(stdin);
//	putchar(ch);
//	dst = ch;
//	
//	while ((cht = getchar(stdin)) != EOF)
//	{
//		dst= (char)((ch - 32 + dst - 32) % 96 + 32);
//		putchar(dst);
//		ch = cht;
//	}
//	return 0;
//}
//int IsHstring(char* ps,int sz)
//{
//	int left = 0;
//	int right = sz-1;
//	while (left < right)
//	{
//		if (ps[left] != ps[right])
//			return 0;
//		left++;
//		right--;
//	}
//	return 1;
//}
////
//char* RotateString(char* ps, int k,int sz)
//{
//	ps = strncat(ps, ps, sz);
//	ps[sz + k] = '\0';
//	ps = ps + k;
//	return ps;
//}
//
//int main()
//{
//	char str[81] = { 0 };
//	scanf("%s", str);
//	int len = strlen(str);
//	char* tmp = NULL;
//	for (int i = 0; i <= len; i++)
//	{
//		tmp = RotateString(str, i,len);
//		if (IsHstring(tmp,len))
//		{
//			printf("Y"); 
//			return 0;
//		}
//
//	}
//	printf("N");
//	return 0;
//}

//enum NUM
//{
//	zero,
//	one,
//	two,
//	three,
//	four,
//	five,
//	six,
//	seven,
//	eight,
//	nine,
//	ten
//}a,b;
//
//char Enum[11][7]= {
//
//	{"zero"},
//	{"one"},
//	{"two"},
//	{"three"},
//	{"four"},
//	{"five"},
//	{"six"},
//	{"seven"},
//	{"eight"},
//	{"nine"},
//	{"ten"}
//};
//
//int main()
//{
//	int t,i;
//	
//	scanf("%d", &t);
//	assert(t >= 1 && t <= 10);
//	for (i = 0; i < t; i++)
//	{
//		char tmp1[7], tmp2[7];
//		scanf("%s %s", tmp1, tmp2);
//		a = (enum NUM)tmp1;
//		b = (enum NUM)tmp2;
//		if (a < b)
//			for (i = a; i <= b; i++)
//				printf("%s ", Enum[i]);
//	}
//
//}

//4½×³ËÖÐµÄÁã 
//int main()
//{
//	int n, x;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &x);
//		int sum = 0;
//		while (x)
//		{
//			sum += x / 5;
//			x /= 5;
//		}
//		printf("%d\n", sum);
//	}
//	return 0;
//
// 
// }
//int main()
//{
//	int i=0,x,cnt=0;
//	scanf("%d", &x);
//	int min[9] = { 0 };
//	while(x)
//	{	
//		if ((x % 10) != 0)
//		{
//			min[i++] = (x % 10);
//			cnt++;
//		}
//		x /= 10;
//	}
//	for( i=0;i<cnt-1;i++)
//		for(int j=0;j<cnt-i-1;j++)
//			if (min[j] > min[j + 1])
//			{
//				int tmp = min[j];
//				min[j] = min[j + 1];
//				min[j + 1] = tmp;
//			}
//	for (i = 0; i < cnt; i++)
//		printf("%d", min[i]);
//
//	
//	return 0;
//}