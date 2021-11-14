#include <list>
#include <iostream>
#include "easyfind.hpp"

int main() {
    std::list<int> list;

    for (int i = 0; i < 5; ++i)
        list.push_back(i * 2);


    for (int i = 0; i < 10; ++i) {
        try {
            easyfind(list, i);
            std::cout << "Found" << std::endl;
        } catch (std::exception &e) {
            std::cout << "Not found" << std::endl;
        }
    }
    return 0;
}
