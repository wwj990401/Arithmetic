#include<stdio.h>
#include"div.h"

div_t div1(int numer, int denom)
{
	div_t output;
	if (denom == 0)
	{
		printf("除数不能为零，返回0\n");
		output.quot = 0;
		output.rem = 0;
		return output;
	}
	if (numer == -(int)2147483648 && denom == -1)
	{
		printf("输出数据溢出，返回0\n");
		output.quot = 0;
		output.rem = 0;
		return output;
	}
	if ((numer%denom) != 0)
	{
		if ((numer<0 && denom>0) || (numer > 0 && denom < 0))
		{
			output.quot = (numer / denom) - 1;
			output.rem = (numer%denom) + denom;
			return output;
		}
	}
	if (numer == -(int)2147483648 && denom < -1)
	{
		long long Lnumer, Ldenom, quot, rem;
		Lnumer = -(long long)numer;
		Ldenom = -(long long)denom;
		quot = Lnumer / Ldenom;
		rem = -Lnumer%Ldenom;
		output.quot = (int)quot;
		output.rem = (int)rem;
		return output;
	}
	output.quot = numer / denom;
	output.rem = numer%denom;
	return output;
}