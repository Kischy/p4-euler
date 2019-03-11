

#include "gtest/gtest.h"

#include "../p4-euler/src/PalindromNumber.h"


class PalindromNumberTester : public testing::Test
{
public:
	PalindromNumber palindrom;
};



TEST(PalindromNumberClassExists, Exists) {
	PalindromNumber palindrom;
}


TEST_F(PalindromNumberTester, SingleNumbersArePalindroms)
{
	ASSERT_TRUE(palindrom.is_palindrom(4));
}


TEST_F(PalindromNumberTester, TwoDigitNumbersRarlyPalindroms)
{
	ASSERT_FALSE(palindrom.is_palindrom(21));
}

TEST_F(PalindromNumberTester, SomeTwoDigiNumbersArePalindroms)
{
	ASSERT_TRUE(palindrom.is_palindrom(33));
}


TEST_F(PalindromNumberTester, SomeThreeDigiNumbersArePalindroms)
{
	ASSERT_TRUE(palindrom.is_palindrom(313));
}

TEST_F(PalindromNumberTester, SomeThreeDigitNumbersAreNoPalindroms)
{
	ASSERT_FALSE(palindrom.is_palindrom(123));
}


TEST_F(PalindromNumberTester, SomeFourDigitNumbersAreNoPalindroms)
{
	ASSERT_FALSE(palindrom.is_palindrom(9931));
}


TEST_F(PalindromNumberTester, SomeFourDigitNumbersArePalindroms)
{
	ASSERT_TRUE(palindrom.is_palindrom(91 * 99));
}


TEST_F(PalindromNumberTester, SomeFifeDigitNumbersAreNoPalindroms)
{
	ASSERT_FALSE(palindrom.is_palindrom(99312));
}


TEST_F(PalindromNumberTester, SomeFifeDigitNumbersArePalindroms)
{
	ASSERT_TRUE(palindrom.is_palindrom(91319));
}


