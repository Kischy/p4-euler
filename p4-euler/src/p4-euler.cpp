// p4-euler.cpp
//

#include <iostream>

#include "PalindromNumber.h"


int main(int argc, char **argv)
{
	int p4_answ = 0;

	PalindromNumber palindrom;

	palindrom.is_palindrom(123);


	std::cout << "The answer to the fouth problem of ProjectEuler.Net is " << p4_answ << ".\n";

	return 0;
}

