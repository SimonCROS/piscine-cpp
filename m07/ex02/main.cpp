#include <iostream>
#include "Array.hpp"

#define MAX_VAL 30
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));

    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand() % 50;
        numbers[i] = value;
        mirror[i] = value;
    }

    std::cout << numbers.size() << std::endl;

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }

    //SCOPE
    {
        Array<int> tmp = numbers;
        std::cout << tmp.size() << std::endl;

        Array<int> test(tmp);
        std::cout << test.size() << std::endl;

        for (unsigned int i = 0; i < numbers.size(); ++i)
        {
            std::cout << numbers[i] << " - ";
            numbers[i]++;
        }
        std::cout << std::endl;
        for (unsigned int i = 0; i < numbers.size(); ++i)
            std::cout << numbers[i] << " - ";
        std::cout << std::endl;

        for (unsigned int i = 0; i < test.size(); ++i)
            std::cout << test[i] << " - ";
        std::cout << std::endl;
    }

    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//
    return 0;
}
