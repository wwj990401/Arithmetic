#include<stdio.h>
#include"add.h"

int add(int added, int add)
{
	long long a, b, sum;
	a = (long long)added;
	b = (long long)add;
	sum = a + b;
	if (sum <= 2147483647 && sum >= -(long long)2147483648)
	{
		return (int)sum;
	}
	printf("����������������0\n");
	return 0;
}