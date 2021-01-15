#include "stdafx.h"
#include "CppUnitTest.h"
#include"../B/sub.h"
#include <Windows.h>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestB
{		
	TEST_CLASS(UnitTestB)
	{
	public:
		
		TEST_METHOD(Testsub)
		{
			int* poutput;
			int expect_diff, expect_return, output_diff, output_return;
			poutput = &output_diff;
			int subtracted, subtract, i;
			WCHAR* psub[8] = { L"sub1", L"sub2", L"sub3", L"sub4", L"sub5", L"sub6", L"sub7", L"sub8"};
			for (i = 0; i < 8; i++)
			{
				expect_return = GetPrivateProfileInt(psub[i], L"expect_return", NULL, L"../²âÊÔÓÃÀý.ini");
				expect_diff = GetPrivateProfileInt(psub[i], L"expect_diff", NULL, L"../²âÊÔÓÃÀý.ini");
				subtracted = GetPrivateProfileInt(psub[i], L"subtracted", NULL, L"../²âÊÔÓÃÀý.ini");
				subtract = GetPrivateProfileInt(psub[i], L"subtract", NULL, L"../²âÊÔÓÃÀý.ini");
				output_return = sub(subtracted, subtract, poutput);
				Assert::IsTrue(expect_return == output_return);
				Assert::IsTrue(expect_diff == output_diff);
			}
		}

	};
}