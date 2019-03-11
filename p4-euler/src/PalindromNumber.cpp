#include "PalindromNumber.h"

#include <cmath>
#include <vector>

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

	std::vector<unsigned int> get_digits(unsigned long long number)
	{
		std::vector<unsigned int> digits;

		while (number)
		{
			digits.push_back(number % 10);
			number /= 10;
		}

		return digits;
	}

	bool is_vec_a_palindrom(std::vector<unsigned int> digits)
	{
		if (digits.size() <= 1)
		{
			return true;
		}

		if (digits.at(0) != digits.at(digits.size()))
		{
			return false;
		}
		
		digits.erase(digits.begin());
		digits.pop_back();

		is_vec_a_palindrom(digits);

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
	
	std::vector<unsigned int> digits = get_digits(number);


	return is_vec_a_palindrom(digits);
}

