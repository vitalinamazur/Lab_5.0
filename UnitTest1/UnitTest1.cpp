#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_5.0/5.0.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			int t;
			t = h(3, 2);
			Assert::AreEqual(t, 5);
		}
	};
}
