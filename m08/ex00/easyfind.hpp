//
// Created by Simon Cros on 12/11/2021.
//

#ifndef EX00_EASYFIND_H
#define EX00_EASYFIND_H

#include <algorithm>

template<typename T>
void easyfind(T &collection, int item) {
    typename T::iterator it;

    it = std::find(collection.begin(), collection.end(), item);
    if (it == collection.end())
        throw std::exception();
}


#endif //EX00_EASYFIND_H
