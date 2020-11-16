#include "pch.h"
#include "CppUnitTest.h"
#include "../6.1.iter/6.1.iter.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace My61itertest
{
	TEST_CLASS(My61itertest)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int i = 21;
			int arr[]{ 20, 50, 25, 17, 24, 19, 18, 15, 34, 56, 19, 16, 41, 15, 19, 17, 15, 81, 10, 32, 30 };


			int expected = 85;
			int functionResult = (arr, i);

		}
	};
}
