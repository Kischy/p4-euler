

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
	ASSERT_FALSE(palindrom.is_palindrom(21));;;
}


