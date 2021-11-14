//
// Created by Simon Cros on 12/11/2021.
//

#ifndef EX02_MUTANTSTACK_HPP
#define EX02_MUTANTSTACK_HPP

#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
public:
    typedef typename MutantStack::container_type::iterator iterator;

    MutantStack(void): std::stack<T>() {}
    MutantStack(const MutantStack &src): std::stack<T>(src) {};
    virtual ~MutantStack() {}

    MutantStack &operator=(const MutantStack &rhs) {
        std::stack<T>::operator=(rhs);
    }

    iterator begin() {
        return this->c.begin();
    };

    iterator end() {
        return this->c.end();
    };
};


#endif //EX02_MUTANTSTACK_HPP
