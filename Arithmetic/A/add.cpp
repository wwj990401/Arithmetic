#include<stdio.h>
#include"add.h"

long long add(int added, int add)
{
	long long a, b, sum;
	a = (long long)added;
	b = (long long)add;
	sum = a + b;
	return sum;
}