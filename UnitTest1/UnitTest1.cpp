#include "pch.h"
#include "CppUnitTest.h"
#include "../laba 6.2(1)/laba.6.2(1).cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1LAB62it
{
	TEST_CLASS(UnitTest1LAB62it)
	{
	public:


		TEST_METHOD(TestMethod1)
		{
			int f[] = { 1, 2, 3, 4, 5 };
			int result = Sum(f, 5);
			Assert::AreEqual(6, result);

		}
	};
}

