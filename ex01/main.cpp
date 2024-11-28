#include "iter.hpp"

template<typename T>
void functi(T tst){
	std::cout << tst << std::endl;
}

int main(){
	int arr[] = {1, 2, 3, 4};
	::iter(arr, 4, functi<int>);
}