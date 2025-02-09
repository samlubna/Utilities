#ifndef _PERMUTATION_
#define _PERMUTATION_
#include <vector>
#include <queue>
class Permutate
{	private:
		static std::queue<int> q;
	public:
		static void printAll(size_t length, std::vector<int> & list);
		Permutate() = delete;
};
#endif /*_PERMUTATION_*/