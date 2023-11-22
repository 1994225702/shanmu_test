#define _CRT_SECURE_NO_WARNINGS 1



#include <stdio.h>
#include <math.h>
int main()
{

	for (int i = 1; i <= 10000; i++)
	{
		int sum = 0;
		int tmp = i,t=1;
		while (tmp /= 10)
		{
			t++;
		}
		tmp = i;
		while (tmp)
		{
			sum += (int)pow((tmp % 10),t);
			tmp /= 10;
		}
		if (sum == i)
			printf("%d\n", i);
	}
	return 0;
	
}
