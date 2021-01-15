#include<stdio.h>
#include"sub.h"

int sub(int subtracted, int subtract, int* result)
{
	int diff = subtracted - subtract;
	if (subtract != (-2147483647 - 1))
	{
		if (subtracted > 0 && subtract < 0)
		{
			if (diff < 0)
			{
				*result = 0;
				return 1;
			}
			else
			{
				*result = diff;
				return 0;
			}
		}
		else if (subtracted < 0 && subtract > 0)
		{
			if (diff > 0)
			{
				*result = 0;
				return 1;
			}
			else
			{
				*result = diff;
				return 0;
			}
		}
		else
		{
			*result = diff;
			return 0;
		}
	}
	else
	{
		if (subtracted > 0)
		{
			*result = 0;
			return 1;
		}
		else
		{
			*result = diff;
			return 0;
		}
	}
}