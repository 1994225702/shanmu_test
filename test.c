#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{

	return 0;
}
//int main()
//{��д�����ɼ�������һ���ٷ��Ƶ������ɼ���Ҫ�������Ӧ�ĳɼ��ȼ���90������ΪA��80��89��ΪB��70��79��ΪC��60��69��ΪD��
//              60������ΪE���ɼ�����0��100֮��ʱ�����error��
//	int S;
//	scanf("%d", &S);
//	if (S >= 90 && S <= 100)
//	{
//		printf("A");
//	}
//	else if (S >= 80 && S <= 89)
//	{
//		printf("B");
//	}
//	else if (S >= 70 && S <= 79)
//	{
//		printf("C");
//	}
//	else if (S >= 60 && S <= 69)
//	{
//		printf("D");
//	}
//	else if (S >= 0 && S <= 59)
//	{
//		printf("E");
//	}
//	else
//		printf("error");
//	return 0;
//}
//int main()
//{��д�����ɼ�������3���������������������
//	int a, b, c;
//	scanf("%d%d%d", &a, &b, &c);
//	printf("%d", c > (a > b ? a : b) ? c : (a > b ? a : b));
//	return 0;
//}
//int main()
//{��д��������һ�������ַ��������ǰһ���ͺ�һ���������ַ�������������0ǰһ�����
//          ��first����9��һ���������last��������Ĳ�����ѧ�ַ��������error��
//	int ch;
//	ch = getchar();//int getchar(void)---return value-int(type)-ASCII��ֵ
//	if (ch >= '0' && ch <= '9')
//	{
//		{if (ch == '0')
//			printf("%s %c", "first",ch+1);
//		else if (ch == 9)
//			printf("%c %s", ch-1, "last");
//		else
//			printf("%c %c", ch - 1, ch + 1);
//		}
//	}
//	else
//		printf("error");
//	return 0;
//}
//int main()
//{//��д��������������������hour��Сʱ����minute�����ӣ���second���룩����һ��ʱ�䣬
//	//�����ʱ��20���Ժ��ʱ�䡣
//
//	int hour, minute, second;
//	scanf("%d:%d:%d", &hour, &minute, &second);
//	if (hour >= 24 || minute >= 60 || second >= 60)
//	{//�ж�����ʱ��ĺϷ���
//		return 0;
//	}
//	else 
//	{	
//		second += 20;
//		if (second >= 60)
//		{
//			second -= 60;
//			minute += 1;
//			if (minute >= 60)
//			{
//				minute -= 60;
//				hour += 1;
//				if (hour >= 24)
//				{
//					hour -= 24;
//				}
//			}
//		}
//	}
//	printf("%02d:%02d:%02d", hour, minute, second);
//	return 0;
//}

