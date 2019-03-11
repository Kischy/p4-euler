// p4-euler.cpp
//

#include <iostream>

#include "PalindromNumber.h"


int main(int argc, char **argv)
{
	unsigned long long p4_answ = 0;

	PalindromNumber palindrom;

	for (unsigned long long i = 100; i <= 999; i++)
	{
		for (unsigned long long j = 100; j <= 999; j++)
		{
			if (palindrom.is_palindrom(i*j))
			{
				p4_answ = i * j;
			}
		}

	}


	std::cout << "The answer to the fouth problem of ProjectEuler.Net is " << p4_answ << ".\n";

	return 0;
}

