#include "span.hpp"

Span::Span() {}

Span::Span(unsigned int n) {
    this->max = n;
}

Span::Span(const Span &src) {
    this->operator=(src);
}

Span::~Span() {}

Span & Span::operator=(const Span &rhs) {
    this->max = rhs.max;
    this->content = rhs.content;
    return *this;
}

void Span::addNumber(int number) {
    if (this->content.size() >= this->max)
        throw std::out_of_range("The vector is full");
    this->content.push_back(number);
}

int Span::longestSpan() const {
    int min, max;

    if (this->content.size() < 2)
        throw std::out_of_range("Need at least two elements");

    min = *std::min_element(this->content.begin(), this->content.end());
    max = *std::max_element(this->content.begin(), this->content.end());

    return max - min;
}

int Span::shortestSpan() const {
    int shortest = INT_MAX;
    std::vector<int>::iterator i;
    std::vector<int>::iterator j;

    if (this->content.size() < 2)
        throw std::out_of_range("Need at least two elements");

    for(i = this->content.begin(); i != this->content.end(); ++i) {
        for (j = this->content.begin(); j != this->content.end(); ++j)
            if (abs(*i - *j) < shortest)
                shortest = abs(*i - *j);
    return shortest;
}
