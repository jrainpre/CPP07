#ifndef ITER_HPP
#define ITER_HPP

#include <iomanip>
#include <sstream>
#include <string.h>
#include <iostream>

// Implement a function template iter that takes 3 parameters and returns nothing.
// • The first parameter is the address of an array.
// • The second one is the length of the array.
// • The third one is a function that will be call on every element of the array

template <typename T ,typename T2>
void iter(T *ptr, int count, void(*f)(T2 &))
{
	for (int i = 0; i < count; i++)
		f(ptr[i]);
}

template <typename T>
void templatefunc(T &pos)
{
	pos = pos + 1;
}

#endif