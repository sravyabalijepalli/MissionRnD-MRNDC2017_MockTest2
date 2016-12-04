#include "stdafx.h"
#include "../src/Problem2.cpp"

using namespace System;
using namespace System::Text;
using namespace System::Collections::Generic;
using namespace Microsoft::VisualStudio::TestTools::UnitTesting;

namespace spec
{
	[TestClass]
	public ref class Problem2Spec
	{
	private:
		TestContext^ testContextInstance;

	public:
		/// <summary>
		///Gets or sets the test context which provides
		///information about and functionality for the current test run.
		///</summary>
		property Microsoft::VisualStudio::TestTools::UnitTesting::TestContext^ TestContext
		{
			Microsoft::VisualStudio::TestTools::UnitTesting::TestContext^ get()
			{
				return testContextInstance;
			}
			System::Void set(Microsoft::VisualStudio::TestTools::UnitTesting::TestContext^ value)
			{
				testContextInstance = value;
			}
		};

#pragma region Additional test attributes
		//
		//You can use the following additional attributes as you write your tests:
		//
		//Use ClassInitialize to run code before running the first test in the class
		//[ClassInitialize()]
		//static void MyClassInitialize(TestContext^ testContext) {};
		//
		//Use ClassCleanup to run code after all tests in a class have run
		//[ClassCleanup()]
		//static void MyClassCleanup() {};
		//
		//Use TestInitialize to run code before running each test
		//[TestInitialize()]
		//void MyTestInitialize() {};
		//
		//Use TestCleanup to run code after each test has run
		//[TestCleanup()]
		//void MyTestCleanup() {};
		//
#pragma endregion 
		[TestMethod, Timeout(1000)]
		void Sample1_Problem2()
		{
			int **arr = (int**)calloc(2, sizeof(int*));
			for (int i = 0; i < 2; i++)
			{
				arr[i] = (int*)calloc(2, sizeof(int));
				for (int j = 0; j < 2; j++)
					arr[i][j] = i * 2 + j + 1;
			}

			rotateArray(arr, 2, "LRR");
			Assert::AreEqual(3, arr[0][0], L"Failed  ", 1, 2);
			Assert::AreEqual(1, arr[0][1], L"Failed  ", 1, 2);
			Assert::AreEqual(4, arr[1][0], L"Failed  ", 1, 2);
			Assert::AreEqual(2, arr[1][1], L"Failed  ", 1, 2);
		};

		[TestMethod, Timeout(1000)]
		void Sample2_Problem2()
		{
			int **arr = (int**)calloc(1, sizeof(int*));

			arr[0] = (int*)calloc(1, sizeof(int));
			arr[0][0] = 1;
			rotateArray(arr, 1, "llllLLLLLRRRRRRRRRrrrrrrrrrr");
			Assert::AreEqual(1, arr[0][0], L"Failed  ", 1, 2);
		};

		[TestMethod, Timeout(1000)]
		void Sample3_Problem2()
		{
			int **arr = (int**)calloc(2, sizeof(int*));
			for (int i = 0; i < 2; i++)
			{
				arr[i] = (int*)calloc(2, sizeof(int));
				for (int j = 0; j < 2; j++)
					arr[i][j] = i * 2 + j + 1;
			}

			rotateArray(arr, 2, "L");
			Assert::AreEqual(2, arr[0][0], L"Failed  ", 1, 2);
			Assert::AreEqual(4, arr[0][1], L"Failed  ", 1, 2);
			Assert::AreEqual(1, arr[1][0], L"Failed  ", 1, 2);
			Assert::AreEqual(3, arr[1][1], L"Failed  ", 1, 2);
		};
	};
}
