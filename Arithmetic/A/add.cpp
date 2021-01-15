#include<stdio.h>
#include"add.h"

int add(int added, int add,int *result)
{
	int sum = added + add;
	if (added > 0 && add > 0)
	{
		if (sum < 0)  
		{
			*result = 0;
			return 1;
		}
		else
		{
			*result = sum;
			return 0;
		}
	}
	else if (added < 0 && add < 0)
	{
		if (sum >= 0)  
		{
			*result = 0;
			return 1;
		}
		else
		{
			*result = sum;
			return 0;
		}
	}
	else
	{
		*result = sum;
		return 0;
	}
}