#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>

template <typename T> class MutantStack : public std::stack<T> {
  private:
  public:
    MutantStack();
    MutantStack(const MutantStack &ref);
    ~MutantStack();
    MutantStack &operator=(const MutantStack &ref);

    typedef typename std::stack<T>::container_type::iterator iterator;
    typedef
        typename std::stack<T>::container_type::const_iterator const_iterator;
    typedef typename std::stack<T>::container_type::reverse_iterator
        reverse_iterator;
    typedef typename std::stack<T>::container_type::const_reverse_iterator
        const_reverse_iterator;

    iterator begin(void) { return this->c.begin(); }
    iterator end(void) { return this->c.end(); }

<<<<<<< HEAD
    // const_iterator cbegin(void) { return this->c.begin(); }
    // const_iterator cend(void) { return this->c.end(); }

    reverse_iterator rbegin(void) { return this->c.rbegin(); }
    reverse_iterator rend(void) { return this->c.rend(); }

    // const_reverse_iterator crbegin(void) { return this->c.rbegin(); }
    // const_reverse_iterator crend(void) { return this->c.rend(); }
=======
    reverse_iterator rbegin(void) { return this->c.rbegin(); }
    reverse_iterator rend(void) { return this->c.rend(); }
>>>>>>> dcaf7d81b3613f90e638aa3f6f0d17ca28390fae
};

template <typename T> MutantStack<T>::MutantStack(){};

template <typename T> MutantStack<T>::~MutantStack(){};

template <typename T> MutantStack<T>::MutantStack(const MutantStack &ref) {
    *this = ref;
};

template <typename T>
MutantStack<T> &MutantStack<T>::operator=(const MutantStack &ref) {
    if (this != &ref) {
        this->c = ref.c;
    }
    return *this;
};

#endif
