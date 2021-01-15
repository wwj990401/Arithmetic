#include "stdafx.h"
#include "CppUnitTest.h"
#include"../C/mul.h"
#include"Windows.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestC
{		
	TEST_CLASS(UnitTestC)
	{
	public:
		
		TEST_METHOD(Testmul)
		{
			int* poutput;
			int expect_mul, expect_return, output_mul, output_return;
			poutput = &output_mul;
			int multiplied, multiplier, i;
			WCHAR* pmul[9] = { L"mul1", L"mul2", L"mul3", L"mul4", L"mul5", L"mul6", L"mul7", L"mul8", L"mul9"};
			for (i = 0; i < 9; i++)
			{
				expect_return = GetPrivateProfileInt(pmul[i], L"expect_return", NULL, L"../²âÊÔÓÃÀý.ini");
				expect_mul = GetPrivateProfileInt(pmul[i], L"expect_mul", NULL, L"../²âÊÔÓÃÀý.ini");
				multiplied = GetPrivateProfileInt(pmul[i], L"multiplied", NULL, L"../²âÊÔÓÃÀý.ini");
				multiplier = GetPrivateProfileInt(pmul[i], L"multiplier", NULL, L"../²âÊÔÓÃÀý.ini");
				output_return = mul(multiplied, multiplier, poutput);
				Assert::IsTrue(expect_return == output_return);
				Assert::IsTrue(expect_mul == output_mul);
			}
		}

	};
}