#include "PalindromNumber.h"




class PalindromNumber::Impl
{
public:

private:
};



PalindromNumber::PalindromNumber() : pimpl(new Impl) {}
PalindromNumber::~PalindromNumber() = default;

bool PalindromNumber::is_palindrom(unsigned long long number)
{

	if (number > 10) return false;

	return true;
}

