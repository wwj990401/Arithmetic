#include "stdafx.h"
#include "CppUnitTest.h"
#include"../C/mul.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestC
{		
	TEST_CLASS(UnitTestC)
	{
	public:
		
		TEST_METHOD(Testmul)
		{
			int expect = 2;
			int output = mul(2, 1);
			Assert::IsTrue(expect == output);
		}

	};
}