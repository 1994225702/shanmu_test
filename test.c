#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{

	return 0;
}
//int main()
//{编写程序，由键盘输入一个百分制的整数成绩，要求输出对应的成绩等级。90分以上为A，80到89分为B，70到79分为C，60到69分为D，
//              60分以下为E。成绩不在0到100之间时输出“error”
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
//{编写程序，由键盘输入3个整数，输出其中最大的数
//	int a, b, c;
//	scanf("%d%d%d", &a, &b, &c);
//	printf("%d", c > (a > b ? a : b) ? c : (a > b ? a : b));
//	return 0;
//}
//int main()
//{编写程序，输入一个数字字符，输出其前一个和后一个的数字字符，如果输入的是0前一个输出
//          “first”，9后一个则输出“last”，输入的不是数学字符，输出“error”
//	int ch;
//	ch = getchar();//int getchar(void)---return value-int(type)-ASCII码值
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
//{//编写程序，输入三个整数变量hour（小时）、minute（分钟）、second（秒）代表一个时间，
//	//输出该时间20秒以后的时间。
//
//	int hour, minute, second;
//	scanf("%d:%d:%d", &hour, &minute, &second);
//	if (hour >= 24 || minute >= 60 || second >= 60)
//	{//判断输入时间的合法性
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

