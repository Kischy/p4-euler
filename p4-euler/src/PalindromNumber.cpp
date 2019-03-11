#include "PalindromNumber.h"




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
	unsigned long long last_number = number % 10;

	number /= last_number;

	if (number == last_number) return true;

	return false;
}

