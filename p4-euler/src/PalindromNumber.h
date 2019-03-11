#pragma once


#include <memory>


class PalindromNumber
{
public:
	PalindromNumber();
	~PalindromNumber();


	bool is_palindrom(unsigned long long number);


private:
	class Impl;
	std::unique_ptr<Impl> pimpl;

};

