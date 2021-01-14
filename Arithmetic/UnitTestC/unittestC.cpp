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
			int expect, output, multiplied, multiplier, i;
			WCHAR* pmul[6] = { L"mul1", L"mul2", L"mul3", L"mul4", L"mul5", L"mul6", };
			for (i = 0; i < 6; i++)
			{
				expect = GetPrivateProfileInt(pmul[i], L"expect", NULL, L"../²âÊÔÓÃÀý.ini");
				multiplied = GetPrivateProfileInt(pmul[i], L"multiplied", NULL, L"../²âÊÔÓÃÀý.ini");
				multiplier = GetPrivateProfileInt(pmul[i], L"multiplier", 1, L"../²âÊÔÓÃÀý.ini");
				output = mul(multiplied, multiplier);
				Assert::IsTrue(expect == output);
			}
		}

	};
}