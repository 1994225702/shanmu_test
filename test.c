#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

//�Ĵ���>cache-���ٻ���>�ڴ�>Ӳ��

//�����Ժ�--Ч�ʸ�--�����ڴ��ͷ�
//��������--����Ҫ��һ�������������Ա
//struct S
//{
//	int n;
//	int arr[];//δ֪��С-���������Ա-����Ĵ�С�ǿ��Ե�����
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



//��̬�ڴ濪��---��ʽ�ϸ�����---��Ҫfree��β�������ɾ�---malloc������ڴ���Ƭ
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
	//������С
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













//void shellSort(int* a, int len); // ��������
//
//int main(void)
//{
//    int i, len, * a;
//    printf("������Ҫ�ŵ����ĸ�����");
//    scanf("%d", &len);
//    a = (int*)malloc(len * sizeof(int)); // ��̬��������
//    printf("������Ҫ�ŵ�����\n");
//    for (i = 0; i < len; i++) { // ����ֵ������
//        scanf("%d", &a[i]);
//    }
//    shellSort(a, len); // ����ϣ��������
//    printf("ϣ���������к���Ϊ��\n");
//    for (i = 0; i < len; i++) { // �����Ľ�������
//        printf("%d\t", a[i]);
//    }
//    printf("\n");
//
//    return 0;
//}
//
//void shellSort(int* a, int len)
//{
//    int i, j, k, tmp, gap;  // gap Ϊ����
//    for (gap = len / 2; gap > 0; gap /= 2) {  // ������ʼ��Ϊ���鳤�ȵ�һ�룬ÿ�α����󲽳�����,
//        for (i = 0; i < gap; ++i) { // ���� i Ϊÿ�η���ĵ�һ��Ԫ���±� 
//            for (j = i + gap; j < len; j += gap)
//            { //�Բ���Ϊgap��Ԫ�ؽ���ֱ�����򣬵�gapΪ1ʱ������ֱ������
//                tmp = a[j];  // ����a[j]��ֵ
//                k = j - gap;  // k��ʼ��Ϊi��ǰһ��Ԫ�أ���i���gap���ȣ�
//                while (k >= 0 && a[k] > tmp) 
//                {
//                    a[k + gap] = a[k]; // ����a[i]ǰ�ұ�tmp��ֵ���Ԫ������ƶ�һλ
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
//        gap = gap / 3 + 1;	//����ϣ������
//        int i = 0;
//        for (i = 0; i < size - gap; i++)	//��0������size-gap-1
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
//            arr[end + gap] = temp;	//�� end+gap ��Ϊ����λ��
//        }
//    }
//}












//ϣ������
//void ShellSort(int* arr, int sz)
//{
//	int count = 0;//������Ϊ�˿���ϣ�������ֱ�Ӳ�����������ܱȽ϶����õļ���
//	int gap = sz;//��������ļ��
//	while (gap > 1)
//	{
//		//����һ��Ҫ��֤gap������ѭ����Ϊ1�����ԶԴ˼�1
//		gap = gap / 3 + 1;//gap>1Ϊ������gap==1��Ϊֱ�Ӳ�������
//
//		for (int i = 0; i < sz - gap; i++)//���ﲢ����һ���԰�һ�����꣬���ǰ�������һ��һ��������
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
//	printf("ϣ������������ƴ���count=%d", count);
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
