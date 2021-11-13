//
// Created by Simon Cros on 11/13/21.
//

#ifndef EX02_ARRAY_HPP
#define EX02_ARRAY_HPP

#include <exception>

template<typename T>
class Array {
private:
    unsigned int _size;
    T *data;

public:
    Array() : _size(0) {
        data = NULL;
    }

    Array(unsigned int n) {
        _size = n;
        data = new T[n];
    }

    Array(const Array &src) {
        this->operator=(src);
    }

    ~Array() {
        delete [] data;
    }

    Array &operator=(const Array &rhs) {
        this->_size = rhs._size;

        this->data = new T[this->_size];
        for (unsigned int i = 0; i < this->_size; ++i)
            this->data[i] = rhs[i];
        return *this;
    }

    T &operator[](unsigned int i) const {
        if (i >= this->_size)
            throw std::out_of_range("Index out of range");
        return this->data[i];
    }

    unsigned int size() const {
        return this->_size;
    }
};


#endif //EX02_ARRAY_HPP
