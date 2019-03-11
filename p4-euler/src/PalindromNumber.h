#pragma once


#include <memory>


class PalindromNumber
{
public:
	PalindromNumber();
	~PalindromNumber();

private:
	class Impl;
	std::unique_ptr<Impl> pimpl;

};

