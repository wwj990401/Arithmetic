#include "stdafx.h"
#include "CppUnitTest.h"
#include"../A/add.h"
#include <Windows.h>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestA
{		
	TEST_CLASS(UnitTestA)
	{
	public:
		
		TEST_METHOD(Testadd)
		{
			int* poutput;
			int expect_sum, expect_return,output_sum,output_return;
			poutput = &output_sum;
			int added, add1, i;
			WCHAR* padd[6] = { L"add1",L"add2",L"add3",L"add4",L"add5",L"add6",};
			for (i = 0; i < 6; i++)
			{
				expect_return = GetPrivateProfileInt(padd[i], L"expect_return", NULL, L"../²âÊÔÓÃÀý.ini");
				expect_sum = GetPrivateProfileInt(padd[i], L"expect_sum", NULL, L"../²âÊÔÓÃÀý.ini");
				added = GetPrivateProfileInt(padd[i], L"added", NULL, L"../²âÊÔÓÃÀý.ini");
				add1 = GetPrivateProfileInt(padd[i], L"add", NULL, L"../²âÊÔÓÃÀý.ini");
				output_return = add(added, add1, poutput);
				Assert::IsTrue(expect_return == output_return);
				Assert::IsTrue(expect_sum == output_sum);
			}
		}

	};
}