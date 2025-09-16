#include <iostream>
#include "head.h"

int main()
{
	int example[5];
	
	for (int i = 0; i < 5; i++)
	{
		example[i] = 2;
	}
	LOG(example[0]);

	std::cin.get();
}