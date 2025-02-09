#include "permutation.hpp"
#include <iostream>

int main()
{
	std::vector <int> cl = {1,2,3,4,5};
	Permutate::printAll(cl.size(),cl);
	return 0;
}