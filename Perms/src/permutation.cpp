#include "permutation.hpp"
#include <iostream>

typedef struct _pr
{
        int a,b;
} pr;

std::queue<int> Permutate::q = {};

void Permutate::printAll (size_t length, std::vector <int> & list)
{
    int w_index = 0;
    std::vector<pr> pos_count;
    length = std::min(length, list.size());
    std::vector<int> window = std::vector<int> (length, -1);

    for (int i = 0; i < length; i++)
        pos_count.push_back({(int)list.size() - i, (int)list.size() - i});
    for (int i = 0; i < list.size(); i++)
        Permutate::q.push(i);

    while (w_index > -1)
    {
        if (pos_count[w_index].a)
        {
            pos_count[w_index].a--;
            if (window[w_index] != -1)
                Permutate::q.push(window[w_index]);
            window[w_index] = Permutate::q.front();
            Permutate::q.pop();
            w_index++;
        }
        else
        {
            Permutate::q.push(window[w_index]);
            pos_count[w_index].a = pos_count[w_index].b;
            window[w_index] = -1;
            w_index--;
        }
        if (w_index == length)
        {
        	std::cout <<"( ";
            for (int index : window)
            	std::cout << list[index] <<',';
            std::cout << ')' << std::endl;
            w_index--;
        }
    }
    Permutate::q = {};
}