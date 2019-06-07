#include "gtest/gtest.h"
#include "main.cpp"

int mas[7][7] = {
{ 0, 1, 1, 0, 0, 0, 1 }, // 1
{ 1, 0, 1, 1, 0, 0, 0 }, // 2
{ 1, 1, 0, 0, 0, 0, 0 }, // 3
{ 0, 1, 0, 0, 1, 0, 0 }, // 4
{ 0, 0, 0, 1, 0, 1, 0 }, // 5
{ 0, 0, 0, 0, 1, 0, 1 }, // 6
{ 1, 0, 0, 0, 0, 1, 0 } // 7
};
		TEST(testing, findPathFromFristEdge)
		{
			string ans = findPath(mas, 1, 5);
			string ok = "5 - 4 - 2 - 1";
			EXPECT_EQ(ans, ok);
		}
		TEST(testing, findPathFromEnotherEdge)
		{
			string ans = findPath(mas, 5, 7);
			string ok = "7 - 6 - 5";
			EXPECT_EQ(ans, ok);
		}
		TEST(testing, findNullPath)
		{
			string ans = findPath(mas, NULL, NULL);
			string ok = "Первая вершина введена неверно!";
			EXPECT_EQ(ans, ok);
		}
		TEST(testing, findNoExistedPath)
		{
			string ans = findPath(mas, 90, 3);
			string ok = "Первая вершина введена неверно!";
			EXPECT_EQ(ans, ok);
		}
		TEST(testing, findSameNodePath)
		{
			string ans = findPath(mas, 2, 2);
			string ok = "2";
			EXPECT_EQ(ans, ok);
		}
		TEST(testing, usualFunctionality)
		{
			string ans = findPath(mas, 1, 5);
			string ok = "5 - 4 - 2 - 1";
			EXPECT_EQ(ans, ok);
		}
		TEST(testing, enterNegativeNumber)
		{
			string ans = findPath(mas, -3, 2);
			string ok = "Первая вершина введена неверно!";
			EXPECT_EQ(ans, ok);
		}
		int main(int argc, char **argv) {
			::testing::InitGoogleTest(&argc, argv);
			return RUN_ALL_TESTS();
		}