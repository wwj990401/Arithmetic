#include<stdio.h>
#include"div.h"

#include"../A/add.h"
#pragma comment(lib,"A.lib")

#include"../B/sub.h"
#pragma comment(lib,"B.lib")

#include <Windows.h>


typedef int(*PMUL)(int a, int b, int* result);

int main()
{
	int* pflag;
	int* presultadd;
	int* presultsub;
	int* presultmul;
	int flag;
	int resultadd;
	int resultsub;
	int resultmul;
	pflag = &flag;
	presultadd = &resultadd;
	presultsub = &resultsub;
	presultmul = &resultmul;
	int a, b;
	div_t output;
	printf("��������������\n");
	scanf("%d%d", &a, &b);
	output = div1(a, b, pflag);
	printf("div1(%d/%d)=%d��%d\n�쳣�����%d\n", a, b, output.quot, output.rem, flag);

	printf("add(%d+%d)=%d\n�쳣�����%d\n", a, b, resultadd, add(a, b, presultadd));

	printf("sub(%d-%d)=%d\n�쳣�����%d\n", a, b, resultsub, sub(a, b, presultsub));

	HMODULE hDLL = LoadLibrary(L"C.dll");
	if (hDLL == NULL)
	{
		printf("����DLL�ļ�ʧ�ܡ�\n");
		return 0;
	}
	PMUL mul = (PMUL)GetProcAddress(hDLL, "mul");
	printf("mul(%d*%d)=%d\n�쳣�����%d\n", a, b, resultmul, mul(a, b, presultmul));
	FreeLibrary(hDLL);
	return 0;
}