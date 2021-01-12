#include "stdafx.h"
#include "CppUnitTest.h"
#include"../B/sub.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestB
{		
	TEST_CLASS(UnitTestB)
	{
	public:
		
		TEST_METHOD(Testsub)
		{
			int expect = 2;
			int output = sub(3, 1);
			Assert::IsTrue(expect == output);
		}

	};
}