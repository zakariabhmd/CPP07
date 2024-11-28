#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T, typename F>
void iter(T *arr, int len, F func){
	int i = 0;
	while (i < len){
		func(arr[i]);
		i++;
	}
}

#endif