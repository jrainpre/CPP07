#include "iter.hpp"
#include "stdio.h"

void testfunction(char &test)
{
	test = 'X';
}


int main()
{
	double arr[10] = { 1.2, 2, 3.555, 4, 599, 6};
	char arr2[10] = "Hello";

	iter(arr, 6, templatefunc);

	for (int i = 0; i < 6; i++)
		std::cout << arr[i] << std::endl;
}
