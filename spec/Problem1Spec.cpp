#include "stdafx.h"
#include "../src/Problem1.cpp"

using namespace System;
using namespace System::Text;
using namespace System::Collections::Generic;
using namespace Microsoft::VisualStudio::TestTools::UnitTesting;

namespace spec
{
	[TestClass]
	public ref class Problem1Spec
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
		void Sample1_Problem1()
		{
			int actualAns = isValidEmail("Manoj iammanoj@gmail.com");
			Assert::AreEqual(2, actualAns, L"Failed for Invalid case P1", 1, 2);
		};

		[TestMethod, Timeout(1000)]
		void Sample2_Problem1()
		{
			int actualAns = isValidEmail("abc abc.com");
			Assert::AreEqual(0, actualAns, L"Failed for Invalid case P1", 1, 2);
		};

		[TestMethod, Timeout(1000)]
		void Sample3_Problem1()
		{
			int actualAns = isValidEmail("abcd abc@d.com");
			Assert::AreEqual(1, actualAns, L"Failed for Invalid case P1", 1, 2);
		};

	};
}
