#include<stdio.h>
#include"div.h"

#include"../A/add.h"
#pragma comment(lib,"A.lib")

#include"../B/sub.h"
#pragma comment(lib,"B.lib")

#include <Windows.h>


typedef int(*PMUL)(int a, int b);

int main()
{
	int a, b;
	div_t output;
	printf("��������������\n");
	scanf("%d%d", &a, &b);
	output = div1(a, b);
	printf("div1(%d/%d)=%d��%d\n", a, b, output.quot, output.rem);

	printf("add(%d+%d)=%d\n", a, b, add(a, b));

	printf("sub(%d-%d)=%d\n", a, b, sub(a, b));

	HMODULE hDLL = LoadLibrary(L"C.dll");
	if (hDLL == NULL)
	{
		printf("����DLL�ļ�ʧ�ܡ�\n");
		return 0;
	}
	PMUL mul = (PMUL)GetProcAddress(hDLL, "mul");
	printf("mul(%d*%d)=%d\n", a, b, mul(a, b));
	FreeLibrary(hDLL);
	return 0;
}