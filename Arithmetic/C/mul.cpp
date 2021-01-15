#include<stdio.h>
#include"mul.h"

int mul(int multiplied, int multiplier)
{
	long long a, b, mul;
	a = (long long)multiplied;
	b = (long long)multiplier;
	mul = a*b;
	if (mul <= 2147483647 && mul >= -(long long)2147483648)
	{
		return (int)mul;
	}
	printf("输出数据溢出，返回0\n");
	return 0;
}