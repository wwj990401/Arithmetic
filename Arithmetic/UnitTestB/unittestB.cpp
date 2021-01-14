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
			int expect, output,subtracted, subtract, i;
			WCHAR* psub[6] = { L"sub1", L"sub2", L"sub3", L"sub4", L"sub5", L"sub6", };
			for (i = 0; i < 6; i++)
			{
				expect = GetPrivateProfileInt(psub[i], L"expect", NULL, L"../��������.ini");
				subtracted = GetPrivateProfileInt(psub[i], L"subtracted", NULL, L"../��������.ini");
				subtract = GetPrivateProfileInt(psub[i], L"subtract", 1, L"../��������.ini");
				output = sub(subtracted, subtract);
				Assert::IsTrue(expect == output);
			}
		}

	};
}