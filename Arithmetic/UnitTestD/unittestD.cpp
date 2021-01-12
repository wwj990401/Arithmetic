#include "stdafx.h"
#include "CppUnitTest.h"
#include"../D/div.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestD
{		
	TEST_CLASS(UnitTestD)
	{
	public:
		
		TEST_METHOD(Testdiv)
		{
			div_t expect = { 1, 2 };
			div_t output = div1(5, 3);
			Assert::IsTrue(expect.quot == output.quot);
			Assert::IsTrue(expect.rem == output.rem);
		}

	};
}