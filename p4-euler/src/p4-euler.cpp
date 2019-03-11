// p4-euler.cpp
//

#include <iostream>

#include "PalindromNumber.h"


int main(int argc, char **argv)
{
	unsigned long long p4_answ = 0;

	PalindromNumber palindrom;

	unsigned long long temp_num = 0;

	for (unsigned long long i = 999; i >= 100; --i)
	{
		for (unsigned long long j = 999; j >= 100; --j)
		{
			temp_num = i * j;
			if (palindrom.is_palindrom(temp_num))
			{
				if (temp_num > p4_answ)
				{
					p4_answ = temp_num;
				}
				
			}
		}

	}


	std::cout << "The answer to the fouth problem of ProjectEuler.Net is " << p4_answ << ".\n";

	return 0;
}

