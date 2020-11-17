/**
 * Unit Tests for Practice class
**/

#include <gtest/gtest.h>
#include "Practice.h"

class PracticeTest : public ::testing::Test
{
	protected:
		PracticeTest(){} //constructor runs before each test
		virtual ~PracticeTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

TEST(PracticeTest, is_simple_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("Not a palindrome");
    ASSERT_FALSE(actual);
}

TEST(PracticeTest, is_simple_palindrome1)
{
    Practice obj;
    bool actual = obj.isPalindrome("");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_simple_palindrome2)
{
    Practice obj;
    bool actual = obj.isPalindrome(" ");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_simple_palindrome3)
{
    Practice obj;
    bool actual = obj.isPalindrome("123");
    ASSERT_FALSE(actual);
}

TEST(PracticeTest, is_simple_palindrome4)
{
    Practice obj;
    bool actual = obj.isPalindrome("111");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_simple_palindrome5)
{
    Practice obj;
    bool actual = obj.isPalindrome("Mom");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, sortDescending)
{
    Practice obj;
		int first = 0;
		int second = 1;
		int third = 3;
    bool actual = obj.sortDescending(first, second, third);
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, sortDescending1)
{
    Practice obj;
		int first = 3;
		int second = 2;
		int third = 1;
    bool actual = obj.sortDescending(first, second, third);
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, sortDescending2)
{
    Practice obj;
		int first = 0;
		int second = 0;
		int third = 0;
    bool actual = obj.sortDescending(first, second, third);
    ASSERT_FALSE(actual);
}
