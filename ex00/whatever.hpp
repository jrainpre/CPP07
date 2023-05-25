# ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <string.h>
#include <iostream>


// swap: Swaps the values of two given arguments. Does not return anything.

template <typename T>
void swap(T& value1, T& value2)
{
	T temp;
	temp = value1;
	value1 = value2;
	value2 = temp;
}


// • min: Compares the two values passed in its arguments and returns the smallest
// one. If the two of them are equal, then it returns the second one.

template <typename T>
T min(T value1, T value2)
{
	if (value1 >= value2)
		return value2;
	if (value1 < value2)
		return value1;
	return 0;
} 

// • max: Compares the two values passed in its arguments and returns the greatest one.
// If the two of them are equal, then it returns the second one.

template <typename T>
T max(T value1, T value2)
{
	if (value1 <= value2)
		return value2;
	if (value1 > value2)
		return value1;
	return 0;
}

# endif