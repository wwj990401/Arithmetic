#include<stdio.h>
#include"sub.h"
#include"assert.h"

int sub(int subtracted, int subtract)
{
	long long a, b, sub;
	a = (long long)subtracted;
	b = (long long)subtract;
	sub = a - b;
	if (sub <= 2147483647 && sub >= -(long long)2147483648)
	{
		return (int)sub;
	}
	printf("输出数据溢出，返回0\n");
	return 0;
}