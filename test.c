#define _CRT_SECURE_NO_WARNINGS 1



#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <math.h>


//int main()
//{
//	char word[10000][11] = { 0 };
//	FILE* fp;
//	int i,n = 0;
//	if (fp = fopen("case1.txt", "r") == NULL)
//		return 0;
//	while (fgets(word[n], 11, fp) != NULL)
//	{
//		n++;
//	}
//	fclose(fp);
//	for(i=0;i<n;i++)
//		for (int j = 0; j < n - i; j++)
//		{
//			if (strcmp(word[j], word[j + 1]) > 0)
//			{
//				char tmp[11];
//				strcpy(tmp, word[j]);
//				strcpy(word[j], word[j + 1]);
//				strcpy(word[j + 1], tmp);
//			}
//		}
//	n = 0;
//	if (fp = fopen("answer.txt", "w") == NULL)
//		return 0;
//	while (fputs(word[n], fp) != EOF)
//	{
//		n++;
//	}
//	fclose(fp);
//	return 0;
//}
//void move(int* arr, int sz)
//{
//	int right = sz-1,left = 0;
//	while(left<right)
//	{
//		//从左边找偶数
//		while (left < right && arr[left] % 2 == 1)
//		{
//			left++;
//		}
//		//从右边找奇数
//		while (left < right && arr[right] % 2 == 0)
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			int tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//		}
//	}
//}
//
//void print(int* arr, int sz)
//{
//	int i;
//	for (i = 0; i < sz ; i++)
//		printf("%d ", arr[i]);
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	move(arr, sz);
//	print(arr, sz);
//	return 0;
//}
// 
// 
// 
////喝汽水问题---1R1瓶汽水，两个空瓶换1瓶汽水
// 等价交换思想，1R买一瓶，其他0.5R买一瓶
// 或者0.5R买一瓶，手里剩一瓶没得换
//int main()
//{
//	int money, total,empty;
//	scanf("%d", &money);
// 
// 
//	///2
// 
// if(money==0)
// 
// 
// 
// 
// 
//	//买回来的汽水喝掉
//	total = money;
//	empty = money;
//	//换回来的汽水
//	while (empty>=2)
//	{
//		total += empty / 2;
//		empty = empty % 2 + empty / 2;
//	}
//	printf("total=%d", total);
//	return 0;
//}




//打印水仙花数
//int main()
//{//各位上的数字的n次方之和等于该数，该数是n位数
//	int i, tmp;
//	for (i = 1; i <= 100000; i++)
//	{
//		tmp = i;
//		int sum = 0;
//		int n = 1;
//		while (tmp /= 10)
//		{
//			n++;
//		}
//		tmp = i;
//		while (tmp)
//		{
//			sum += (int)pow(tmp % 10, n);
//			tmp /= 10;
//		}
//		if (i == sum)
//			printf("%d ", i);
//	}
//	return 0;
//}


//int main()
//{//a+aa+aaa+aaaa+aaaaa+...+n-a==?
//	int i,a, n,ret =0,sum=0;
//	scanf("%d%d", &a, &n);
//	for (i = 0; i < n; i++)
//	{
//		ret = ret * 10 + a;
//		sum += ret;
//	}
//	printf("%d", sum);
//	return 0;
//}


////逆序函数
//void reverse(char* str)
//{
//	assert(str);
//	int len = strlen(str);
//	char* left = str;
//	char* right = str + len - 1;
//
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	char arr[100] = { 0 };
//	gets(arr);
//	reverse(arr);
//	printf("逆序后的的字符串：%s\n", arr);
//	return 0;
//}












//int main()
//{
//	char* c[] = { "ENTER","NEW","POINT","FIRST" }; //指针数组
//	char** cp[] = { c + 3,c + 2,c + 1,c };		//二级指针数组
//	char*** cpp = cp;							//三级指针
//
//	printf("%s\n", **++cpp);	//POINT				//cpp自增值已经改变
//	printf("%s\n", *--*++cpp+3);	//ER			//cpp值再次改变
//	printf("%s\n", *cpp[-2]+3);		//ST				//cpp值不变
//	printf("%s\n", cpp[-1][-1]+1);  //EW
//	return 0;
//}