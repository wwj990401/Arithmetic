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
			long long expect, output;
			int added, add1, i;
			WCHAR* padd[6] = { L"add1",L"add2",L"add3",L"add4",L"add5",L"add6",};
			for (i = 0; i < 6; i++)
			{
				expect = GetPrivateProfileInt(padd[i], L"expect", NULL, L"../²âÊÔÓÃÀý.ini");
				added = GetPrivateProfileInt(padd[i], L"added", NULL, L"../²âÊÔÓÃÀý.ini");
				add1 = GetPrivateProfileInt(padd[i], L"add", NULL, L"../²âÊÔÓÃÀý.ini");
				output = add(added, add1);
				Assert::IsTrue(expect == output);
			}
		}

	};
}