#include "stdafx.h"
#include "CppUnitTest.h"
#include"../A/add.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestA
{		
	TEST_CLASS(UnitTestA)
	{
	public:
		
		TEST_METHOD(Testadd)
		{
			int expect = 4;
			int output = add(2, 2);
			Assert::IsTrue(expect == output);
		}

	};
}