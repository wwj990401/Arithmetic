#include<stdio.h>
#include"div.h"

div_t div1(int a, int b)
{
	div_t output;
	output.quot = a / b;
	output.rem = a%b;
	return output;
}