#include "pch.h"
#include "CppUnitTest.h"
#include "../6.3rec/6.3rec.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest63rec
{
	TEST_CLASS(UnitTest63rec)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			const int k = 3;
			int a[k] = { 3,1,2 };
			t = Perev1(a, k, 1);
			Assert::AreEqual(t, 0);
		}
	};
}
