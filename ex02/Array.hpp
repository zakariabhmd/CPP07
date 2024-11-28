#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <exception>

template <typename T>
class Array{
	private :
		T *elements;
		unsigned int size_;
	public :
		Array() : elements(NULL), size_(0){}

		Array(unsigned int n) : size_(n){
			elements = new T[n];
			for (unsigned int i = 0; i < n ; i++)
				elements[i] = T();
		}

		Array &operator=(const Array &copy){
			if (this != &copy){
				delete[] elements;
				this->size_ = copy.size_;
				elements = new T[size_];
				for (unsigned int i = 0; i < size_ ; i++)
					elements[i] = copy.elements[i];
			}
			return *this;
		}

		Array(const Array &copy) : size_(copy.size_){
			// *this = copy;
			elements = new T[size_];
			for (unsigned int i = 0; i < size_ ; i++)
				elements[i] = copy.elements[i];
			
		}

		T &operator[](unsigned int n){
			if (n >= size_)
				// std::cerr << ""
				throw std::out_of_range("out of range");
			return elements[n];
		}

		unsigned int size() const{
			return size_;
		}

		~Array(){
			delete[] elements;
		}

};

#endif