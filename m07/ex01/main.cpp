#include <iostream>
#include "iter.hpp"

void	print(int &a)
{
    std::cout << a << std::endl;
}

int main(void)
{
    int arr[3] = {1, 2, 3};

    iter(arr, 3, print);
}
