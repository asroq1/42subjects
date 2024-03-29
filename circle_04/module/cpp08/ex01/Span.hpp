#ifndef SPAN_HPP
#define SPAN_HPP

#include <algorithm>
#include <iostream>
#include <stdexcept>
#include <vector>

class Span {

  private:
    std::vector<int> _v;
    unsigned int _maxSize;

  public:
    Span();
    Span(unsigned int n);
    Span(const Span &ref);
    ~Span();
    Span &operator=(const Span &ref);
    void addNumber(int n);
    void addNumber(std::vector<int> v, unsigned int size);
<<<<<<< HEAD
    int getSize();
=======
>>>>>>> dcaf7d81b3613f90e638aa3f6f0d17ca28390fae
    unsigned int shortestSpan();
    unsigned int longestSpan();

    class TooMuchSizeException : public std::exception {
      public:
        virtual const char *what() const throw();
    };
    class NotEnoughException : public std::exception {
      public:
        virtual const char *what() const throw();
    };
};
#endif
