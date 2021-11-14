//
// Created by Simon Cros on 12/11/2021.
//

#ifndef EX01_SPAN_HPP
#define EX01_SPAN_HPP


#include <vector>

class Span {
private:
    unsigned int max;
    std::vector<int> content;

    Span();
public:
    Span(unsigned int n);
    Span(const Span &src);
    ~Span();
    Span &operator=(const Span &rhs);

    void addNumber(int number);
    int shortestSpan() const;
    int longestSpan() const;
};


#endif //EX01_SPAN_HPP
