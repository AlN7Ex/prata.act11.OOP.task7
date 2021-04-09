#include "complex0.h"

#include <iostream>

int main()
{
	Complex a(3.0, 4.0);
	Complex c;

	std::cout << "Enter a complex number (q to quit): \n";

	while (std::cin >> c)
	{
		std::cout << "c is " << c << std::endl;
		std::cout << "~c is " << ~c << std::endl;
		std::cout << "a + c is " << a + c << std::endl;
		std::cout << "a - c is " << a - c << std::endl;
		std::cout << "a * c is " << a * c << std::endl;
		std::cout << "2 * c is " << 2 * c << std::endl;
		std::cout << "Enter a complex number (q to quit): \n";
	}
	
	std::cout << "Good job, guy! Executed!" << std::endl;

	return 0;
}
