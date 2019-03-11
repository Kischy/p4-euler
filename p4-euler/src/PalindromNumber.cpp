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


	unsigned long long powLL(unsigned long long number, unsigned long long exponent)
	{
		if (exponent == 1) return number;

		return number * powLL(number, exponent - 1);
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
	
	unsigned long long number_of_digits = get_number_of_digits(number);
	unsigned long long last_number = 0, first_number = 0;


	for (unsigned long long i = number_of_digits; i >= number_of_digits/2; --i)
	{
		last_number = number % 10;
		first_number = number % powLL(10LL, i);
		
	}



	number /= 10;

	if (number == last_number) return true;

	return false;
}

