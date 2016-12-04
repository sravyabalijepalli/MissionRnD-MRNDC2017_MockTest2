#include "stdafx.h"
#include "../src/Problem3.cpp"
#include <string.h>

using namespace System;
using namespace System::Text;
using namespace System::Collections::Generic;
using namespace Microsoft::VisualStudio::TestTools::UnitTesting;

namespace spec
{
	[TestClass]
	public ref class Problem3Spec
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


		struct node *createnode(int num)
		{
			struct node *new_node = (struct node*)malloc(sizeof(struct node));
			new_node->num = num;
			new_node->prev = NULL;
			new_node->next = NULL;
			return new_node;
		}

		struct node* strtoDLL(char *str)
		{
			int len = strlen(str);
			if (len == 0)
				return NULL;

			struct node *head = createnode(str[len - 1] - '0');
			for (int i = len - 2; i >= 0; i--)
			{
				struct node *temp = createnode(str[i] - '0');
				head->prev = temp;
				temp->next = head;
				head = temp;
			}

			return head;
		}


		[TestMethod, Timeout(1000)]
		void Sample1_Problem3()
		{
			struct node *passkey = strtoDLL("321");
			int actualAns = doorstoCross(passkey);
			Assert::AreEqual(1, actualAns, L"Failed  ", 1, 2);
		};

		[TestMethod, Timeout(1000)]
		void Sample2_Problem3()
		{
			struct node *passkey = strtoDLL("758");
			int actualAns = doorstoCross(passkey);
			Assert::AreEqual(4, actualAns, L"Failed  ", 1, 2);
		};

		[TestMethod, Timeout(1000)]
		void Sample3_Problem3()
		{
			struct node *passkey = strtoDLL("");
			int actualAns = doorstoCross(passkey);
			Assert::AreEqual(NULL, actualAns, L"Failed  ", 1, 2);
		};
	};
}
