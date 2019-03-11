#include "PalindromNumber.h"

#include <cmath>

namespace //annonymous namespace
{

	unsigned long long get_number_of_digits(unsigned long long number)
	{
		return std::log10(number) + 1;
	}

	bool is_one_digit_number(unsigned long long number)
	{
		if (get_number_of_digits(number) == 1) return true;
		return false;
	}

}



class PalindromNumber::Impl
{
public:

private:
};



PalindromNumber::PalindromNumber() : pimpl(new Impl) {}
PalindromNumber::~PalindromNumber() = default;



//Member functions
bool PalindromNumber::is_palindrom(unsigned long long number)
{
	if (is_one_digit_number(number) == true) return true;
	



	unsigned long long last_number = number % 10;

	number /= 10;

	if (number == last_number) return true;

	return false;
}

