#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

//寄存器>cache-高速缓存>内存>硬盘

//连续性好--效率高--方便内存释放
//柔性数组--至少要有一个非柔性数组成员
//struct S
//{
//	int n;
//	int arr[];//未知大小-柔性数组成员-数组的大小是可以调整的
//};
//
//int main()
//{
//	struct S* ps = (struct S*)malloc(sizeof(struct S) + 5 * sizeof(int));
//	ps->n = 100;
//
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		ps->arr[i] = i;//0 1 2 3 4
//	}
//	struct S* ptr = realloc(ps, 44);
//	if (ptr != NULL)
//	{
//		ps = ptr;
//	}
//	for (i = 5; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//	return 0;
//}



//动态内存开辟---形式上更复杂---需要free多次才能清理干净---malloc多造成内存碎片
struct S
{
	int n;
	int* arr;
};

int main()
{
	struct S* ps = (struct S*)malloc(sizeof(struct S));
	ps->arr = malloc(5 * sizeof(int));

	int i;
	for (i = 0; i < 5; i++)
	{
		ps->arr[i] = i;
	}
	for (i = 0; i < 5; i++)
	{
		printf("%d ", ps->arr[i]);
	}
	//调整大小
	int* ptr = realloc(ps->arr, 10 * sizeof(int));
	if (ptr != NULL)
	{
		ps->arr = ptr;
	}
	for (i = 5; i < 10; i++)
	{
		ps->arr[i] = i;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", ps->arr[i]);
	}
	return 0;
}













//void shellSort(int* a, int len); // 函数声明
//
//int main(void)
//{
//    int i, len, * a;
//    printf("请输入要排的数的个数：");
//    scanf("%d", &len);
//    a = (int*)malloc(len * sizeof(int)); // 动态定义数组
//    printf("请输入要排的数：\n");
//    for (i = 0; i < len; i++) { // 数组值的输入
//        scanf("%d", &a[i]);
//    }
//    shellSort(a, len); // 调用希尔排序函数
//    printf("希尔升序排列后结果为：\n");
//    for (i = 0; i < len; i++) { // 排序后的结果的输出
//        printf("%d\t", a[i]);
//    }
//    printf("\n");
//
//    return 0;
//}
//
//void shellSort(int* a, int len)
//{
//    int i, j, k, tmp, gap;  // gap 为步长
//    for (gap = len / 2; gap > 0; gap /= 2) {  // 步长初始化为数组长度的一半，每次遍历后步长减半,
//        for (i = 0; i < gap; ++i) { // 变量 i 为每次分组的第一个元素下标 
//            for (j = i + gap; j < len; j += gap)
//            { //对步长为gap的元素进行直插排序，当gap为1时，就是直插排序
//                tmp = a[j];  // 备份a[j]的值
//                k = j - gap;  // k初始化为i的前一个元素（与i相差gap长度）
//                while (k >= 0 && a[k] > tmp) 
//                {
//                    a[k + gap] = a[k]; // 将在a[i]前且比tmp的值大的元素向后移动一位
//                    k -= gap;
//                }
//                a[k + gap] = tmp;
//            }
//        }
//    }
//}



////void ShellSort(int* arr, int size)
////{
//    int gap = size;
//    while (gap > 1)
//    {
//        gap = gap / 3 + 1;	//调整希尔增量
//        int i = 0;
//        for (i = 0; i < size - gap; i++)	//从0遍历到size-gap-1
//        {
//            int end = i;
//            int temp = arr[end + gap];
//            while (end >= 0)
//            {
//                if (arr[end] > temp)
//                {
//                    arr[end + gap] = arr[end];
//                    end -= gap;
//                }
//                else
//                {
//                    break;
//                }
//            }
//            arr[end + gap] = temp;	//以 end+gap 作为插入位置
//        }
//    }
//}












//希尔排序
//void ShellSort(int* arr, int sz)
//{
//	int count = 0;//这是我为了看看希尔排序和直接插入排序的性能比较而设置的计数
//	int gap = sz;//设置排序的间隔
//	while (gap > 1)
//	{
//		//这里一定要保证gap最后进来循环后为1，所以对此加1
//		gap = gap / 3 + 1;//gap>1为与排序，gap==1，为直接插入排序
//
//		for (int i = 0; i < sz - gap; i++)//这里并不是一次性把一组排完，而是挨个往后，一组一个轮流排
//		{
//			int end = i;
//			int tmp = arr[end + gap];
//			while (end >= 0)
//			{
//				if (tmp < arr[end])
//				{
//					arr[end + gap] = arr[end];
//					end -= gap;
//					count++;
//				}
//				else
//				{
//					break;
//				}
//			}
//			arr[end + gap] = tmp;
//		}
//	}
//	printf("希尔插入排序后移次数count=%d", count);
//}
//
//void Print(int* arr, int sz)
//{
//	for (int i = 0; i < sz; i++)
//		printf("%d ", arr[i]);
//}
//
//void test()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[1]);
//	ShellSort(arr, sz);
//	printf("\n");
//	Print(arr, sz);
//}
//
//int main()
//{
//	test();
//	return 0;
//}
