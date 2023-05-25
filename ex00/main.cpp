#include "whatever.hpp"
#include <iomanip>
#include <sstream>

int main()
{
	int value1 = 10;
	int value2 = 5;

	std::cout << "value1: " << value1 << std::endl;
	std::cout << "value2: " << value2 << std::endl;

	swap(value1, value2);

	std::cout << "value1: " << value1 << std::endl;
	std::cout << "value2: " << value2 << std::endl;

	std::string string1 = "hallo";
	std::string string2 = "test";

	std::cout << string1 << std::endl;
	std::cout << string2 << std::endl;


	swap(string1, string2);

		std::cout << string1 << std::endl;
	std::cout << string2 << std::endl;


	std::cout << min(value1, value2) << std::endl;
	std::cout << max(value1, value2) << std::endl;

	int a = 2;
int b = 3;
::swap( a, b );
std::cout << "a = " << a << ", b = " << b << std::endl;
std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
std::string c = "chaine1";
std::string d = "chaine2";
::swap(c, d);
std::cout << "c = " << c << ", d = " << d << std::endl;
std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
return 0;



}
