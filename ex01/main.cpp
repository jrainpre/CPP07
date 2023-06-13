#include "iter.hpp"
#include "stdio.h"

void testfunction(char &test)
{
	test = 'X';
}


int main()
{
	double arr[10] = { 1.2, 2, 3.555, 4, 599, 6};
	// char arr2[10] = "Hello";

	iter(arr, 6, templatefunc<double>);

	for (int i = 0; i < 6; i++)
		std::cout << arr[i] << std::endl;
}


// class Awesome
// {
//   public:
//     Awesome( void ) : _n( 42 ) { return; }
//     int get( void ) const { return this->_n; }
//   private:
//     int _n;
// };

// std::ostream & operator<<( std::ostream & o, Awesome const & rhs )
// {
//   o << rhs.get();
//   return o;
// }

// template< typename T >
// void print( T& x )
// {
//   std::cout << x << std::endl;
//   return;
// }

// int main() {
//   int tab[] = { 0, 1, 2, 3, 4 };
//   Awesome tab2[5];

//   iter( tab, 5, print<const int> );
//   iter( tab2, 5, print<Awesome> );

//   return 0;
// }