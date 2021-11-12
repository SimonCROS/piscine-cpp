//
// Created by Simon Cros on 12/11/2021.
//

#ifndef EX01_ITER_HPP
#define EX01_ITER_HPP


template<typename T>
void iter(T *array, unsigned long size, void (*f)(T &item)) {
    for (unsigned long i = 0; i < size; ++i)
        f(array[i]);
}


#endif //EX01_ITER_HPP
