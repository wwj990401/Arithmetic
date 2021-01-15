#include "stdafx.h"
#include "CppUnitTest.h"
#include"../D/div.h"
#include"Windows.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestD
{		
	TEST_CLASS(UnitTestD)
	{
	public:
		
		TEST_METHOD(Testdiv)
		{
			div_t expect, output;
			int expect_quot, expect_rem, numer, denom, i;
			WCHAR* pdiv[11] = { L"div1", L"div2", L"div3", L"div4", L"div5", L"div6", L"div7", L"div8", L"div9", L"div10", L"div11"};
			for (i = 0; i < 11; i++)
			{
				expect_quot = GetPrivateProfileInt(pdiv[i], L"expect_quot", NULL, L"../²âÊÔÓÃÀý.ini");
				expect_rem = GetPrivateProfileInt(pdiv[i], L"expect_rem", NULL, L"../²âÊÔÓÃÀý.ini");
				expect.quot = expect_quot;
				expect.rem = expect_rem;
				numer = GetPrivateProfileInt(pdiv[i], L"numer", NULL, L"../²âÊÔÓÃÀý.ini");
				denom = GetPrivateProfileInt(pdiv[i], L"denom", NULL, L"../²âÊÔÓÃÀý.ini");
				output = div1(numer, denom);
				Assert::IsTrue(expect.quot == output.quot);
				Assert::IsTrue(expect.rem == output.rem);
			}
		}

	};
}