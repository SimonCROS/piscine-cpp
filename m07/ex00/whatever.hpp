//
// Created by Simon Cros on 12/11/2021.
//

#ifndef EX00_WHATEVER_H
#define EX00_WHATEVER_H


template<typename T>
void swap(T &a, T &b) {
    T tmp = b;
    b = a;
    a = tmp;
}

template<typename T>
T &min(T &a, T &b) {
    return a <= b ? a : b;
}

template<typename T>
T &max(T &a, T &b) {
    return a >= b ? a : b;
}


#endif //EX00_WHATEVER_H
