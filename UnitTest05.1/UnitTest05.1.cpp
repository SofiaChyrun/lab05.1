#include "pch.h"
#include "CppUnitTest.h"
#include "../ChyrunSofialab5.1/ChyrunSofialab5.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest051
{
	TEST_CLASS(UnitTest051)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			t = g(0, 0);
			Assert::AreEqual(t, 1);
		}
	};
}
