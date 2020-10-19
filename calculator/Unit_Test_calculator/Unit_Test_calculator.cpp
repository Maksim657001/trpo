#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "pch.h"
#include "CppUnitTest.h"
#include "..\calculator\main.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestcalculator
{
	TEST_CLASS(UnitTestcalculator)
	{
	public:
		
		TEST_METHOD(TestSum)
		{ 

			Assert::IsTrue(sum(2, 3) == 5);
			Assert::IsTrue(sum(-2, -3) == -5);
			Assert::IsTrue(sum(0, 0) == 0);
			Assert::IsTrue(sum(-8, 3) == -5);
			Assert::IsTrue(sum(0, -3) == -3);
			Assert::IsTrue(sum(2, -3) == -1);
		}

		TEST_METHOD(TestMynus)
		{
			Assert::IsTrue(mynus(2, -3) == 5);
			Assert::IsTrue(mynus(-2, -3) == 1);
			Assert::IsTrue(mynus(0, -8) == 8);
			Assert::IsTrue(mynus(2, 9) == -7);
		}
		TEST_METHOD(TestMultiply)
		{ 
			Assert::IsTrue(multiply(2, -3) == -6);
			Assert::IsTrue(multiply(0, -3) == 0);
			Assert::IsTrue(multiply(-2, -3) == 6);
			Assert::IsTrue(multiply(2, -3) == -6);
		}
		TEST_METHOD(TestShare)
		{ 
			Assert::IsTrue(share(8, -2) == -4);
			Assert::IsTrue(share(0, -3) == 0);
			Assert::IsTrue(share(-3, -3) == 1);
			Assert::IsTrue(share(-3, -3) == 1);
			Assert::IsTrue(share(27, 3) == 9);
		}
		TEST_METHOD(TestElevate)
		{ 
			Assert::IsTrue(elevate(2, 2) == 4);
			Assert::IsTrue(elevate(2, 0) == 1);
			Assert::IsTrue(elevate(2, 1) == 2);
			Assert::IsTrue(elevate(2, 5) == 32);
		}
	};
}
