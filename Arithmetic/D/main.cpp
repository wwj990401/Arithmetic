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
	printf("请输入两个数：\n");
	scanf("%d%d", &a, &b);
	output = div1(a, b);
	printf("div1(%d/%d)=%d余%d\n", a, b, output.quot, output.rem);

	printf("add(%d+%d)=%d\n", a, b, add(a, b));

	printf("sub(%d-%d)=%d\n", a, b, sub(a, b));

	HMODULE hDLL = LoadLibrary(L"C.dll");
	if (hDLL == NULL)
	{
		printf("加载DLL文件失败。\n");
		return 0;
	}
	PMUL mul = (PMUL)GetProcAddress(hDLL, "mul");
	printf("mul(%d*%d)=%d\n", a, b, mul(a, b));
	FreeLibrary(hDLL);
	return 0;
}