#include<stdio.h>
#include"mul.h"
#include<limits.h>

int mul(int multiplied, int multiplier, int* result)
{
	if (multiplied >= 0 && multiplier >= 0)
	{
		if (2147483647 / multiplied < multiplier)
		{
			*result = 0;
			return 1;
		}
		else
		{
			if (*result == -858993460)
			{
				*result = multiplied * multiplier;
				return 0;
			}
			else
			{
				return 0;
			}
		}
	}
	else if (multiplied < 0 && multiplier < 0)
	{
		if (2147483647 / multiplied > multiplier)
		{
			*result = 0;
			return 1;
		}
		else
		{
			if (*result == -858993460)
			{
				*result = multiplied * multiplier;
				return 0;
			}
			else
			{
				return 0;
			}
		}
	}
	else if (multiplied * multiplier == (-2147483647 - 1))
	{
		*result = multiplied * multiplier;
		return 0;
	}
	else if (multiplied * multiplier == -858993460)
	{
		*result = multiplied * multiplier;
		return 0;
	}
	else if (multiplied == (-2147483647 - 1) || multiplier == (-2147483647 - 1))
	{
		if (multiplied == 0 || multiplier == 0)
		{
			*result = 0;
			return 0;
		}
		else
		{
			*result = 0;
			return 1;
		}
	}
	else
	{
		*result = multiplied * multiplier;
		return multiplied < 0 ? mul(-multiplied, multiplier, result) : mul(multiplied, -multiplier, result);
	}
}