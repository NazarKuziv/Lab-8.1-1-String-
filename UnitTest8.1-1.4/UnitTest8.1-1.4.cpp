#include "pch.h"
#include "CppUnitTest.h"
#include "../Project 8.1-1(string).cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest8114
{
	TEST_CLASS(UnitTest8114)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char s[10] = "jjkjnjSQV";

			int t = Include(s);

			Assert::AreEqual(t, 1);
		}
	};
}
