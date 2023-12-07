#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <>
int main()
{
	double d, p, r, m;
	scanf("%lf%lf%lf", &d, &p, &r);
	m = log(p / (p - d * r)) / log(1 + r);
	if (m > 0)
		printf("%.1lf");
	else
		printf("God");
	return 0;
}
  





