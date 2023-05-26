#ifndef ARRAY_HPP
#define ARRAY_HPP


#include <ostream>
#include <string.h>
#include <stdexcept>
// • Construction with no parameter: Creates an empty array. X
// • Construction with an unsigned int n as a parameter: Creates an array of n elements X
// initialized by default. X
// Tip: Try to compile int * a = new int(); then display *a.
// • Construction by copy and assignment operator. In both cases, modifying either the
// original array or its copy after copying musn’t affect the other array.X
// • You MUST use the operator new[] to allocate memory. Preventive allocation (allocating memory in advance) is forbidden. Your program must never access nonallocated memory.
// • Elements can be accessed through the subscript operator: [ ].
// • When accessing an element with the [ ] operator, if its index is out of bounds, an
// std::exception is thrown.
// • A member function size() that returns the number of elements in the array. This
// member function takes no parameter and musn’t modify the current instance.
// As usual, ensure everything works as expected and turn in a main.cpp file that contains your tests.
template <typename T>
class Array
{
public:
    Array();
    Array(unsigned int n);
	Array(Array<T> const& src);
    ~Array();
	Array<T>&		operator=(Array<T> const& rhs);

	unsigned int size() const;
	void print(std::ostream& stream) const;
    T& operator[](unsigned int i);

	//expection classes
	class OutofRangeException : public std::exception
	{
		public:
			virtual const char* what() const throw(){return "index out of range";}
	};

protected:
    T* _array;
    unsigned int _size;
};

template <class T>
std::ostream&	operator<<(std::ostream& stream, Array<T>const& cl);

template <typename T>
Array<T>::Array()
{
    _array = NULL;
    _size = 0;
}

template <typename T>
Array<T>::Array(unsigned int n)
{
    _size = n;
    _array = new T[n];
}

template <typename T>
Array<T>::Array(Array const& src)
{
    _size = src._size;
    _array = new T[_size];
    for (unsigned int i = 0; i < _size; i++)
        _array[i] = src._array[i];
}

template <typename T>
Array<T>& Array<T>::operator=(Array<T> const& rhs)
{
    if (this != &rhs)
	{
		if (_array != NULL)
        	delete[] _array;
        _size = rhs._size;
        _array = new T[_size];
        for (unsigned int i = 0; i < _size; i++)
            _array[i] = rhs._array[i];
    }
    return *this;
}

template <typename T>
Array<T>::~Array()
{
	if (_array != NULL)
		delete[] _array;
}

template <typename T>
T&	Array<T>::operator[](unsigned int i)
{
	if (i >= _size)
		throw Array::OutofRangeException();
	return _array[i];
}

template <typename T>
unsigned int Array<T>::size() const 
{
	return (_size);
}

template <typename T>
void Array<T>::print(std::ostream& stream) const
{
	for (unsigned int i = 0; i < _size; i++)
	{
		stream << _array[i] << ';';
	}
	stream << std::endl;
	stream << "size is : " << _size << std::endl;
}

template <typename T>
std::ostream&	operator<<(std::ostream& stream, Array<T>const& rhs)
{
	rhs.print(stream);
	return (stream);
}





#endif