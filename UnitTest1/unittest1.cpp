#include "stdafx.h"
#include "CppUnitTest.h"
#include "D:\Учеба\УКПО\MyUKPO\CursUKPO\UKPO2_graph\Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		int mas[7][7] = {
		{ 0, 1, 1, 0, 0, 0, 1 }, // 1
		{ 1, 0, 1, 1, 0, 0, 0 }, // 2
		{ 1, 1, 0, 0, 0, 0, 0 }, // 3
		{ 0, 1, 0, 0, 1, 0, 0 }, // 4
		{ 0, 0, 0, 1, 0, 1, 0 }, // 5
		{ 0, 0, 0, 0, 1, 0, 1 }, // 6
		{ 1, 0, 0, 0, 0, 1, 0 } // 7
		};
		TEST_METHOD(findPathFromFristEdge)
		{
			string ans = findPath(mas, 1, 5);
			string ok = "5 - 4 - 2 - 1";
			Assert::AreEqual(ans, ok);
		}
		TEST_METHOD(findPathFromEnotherEdge)
		{
			string ans = findPath(mas, 5, 7);
			string ok = "7 - 6 - 5";
			Assert::AreEqual(ans, ok);
		}
		TEST_METHOD(findNullPath)
		{
			string ans = findPath(mas, NULL, NULL);
			string ok = "Первая вершина введена неверно!";
			Assert::AreEqual(ans, ok);
		}
		TEST_METHOD(findNoExistedPath)
		{
			string ans = findPath(mas, 90, 3);
			string ok = "Первая вершина введена неверно!";
			Assert::AreEqual(ans, ok);
		}
		TEST_METHOD(findSameNodePath)
		{
			string ans = findPath(mas, 2, 2);
			string ok = "2";
			Assert::AreEqual(ans, ok);
		}
		TEST_METHOD(usualFunctionality)
		{
			string ans = findPath(mas, 1, 5);
			string ok = "5 - 4 - 2 - 1";
			Assert::AreEqual(ans, ok);
		}
		TEST_METHOD(enterNegativeNumber)
		{
			string ans = findPath(mas, -3, 2);
			string ok = "Первая вершина введена неверно!";
			Assert::AreEqual(ans, ok);
		}
		TEST_METHOD(enterNubmersWithPlus)
		{
			string ans = findPath(mas, +3, +6);
			string ok = "6 - 7 - 1 - 3";
			Assert::AreEqual(ans, ok);
		}
		TEST_METHOD(enterFloatNubmer)
		{
			string ans = findPath(mas, 1.6, 4);
			string ok = "Первая вершина введена неверно!";
			Assert::AreEqual(ans, ok);
		}
		TEST_METHOD(enterSecondFloatNubmer)
		{
			string ans = findPath(mas, 1, 4.3);
			string ok = "Вторая вершина введена неверно!";
			Assert::AreEqual(ans, ok);
		}
		TEST_METHOD(enterSpacesThenNumber)
		{
			string ans = findPath(mas,    3,    6);
			string ok = "6 - 7 - 1 - 3";
			Assert::AreEqual(ans, ok);
		}
		TEST_METHOD(enterEntersThenNubmer)
		{
			string ans = findPath(mas, 1, 5);
			string ok = "5 - 4 - 2 - 1";
			Assert::AreEqual(ans, ok);
		}

	};
}