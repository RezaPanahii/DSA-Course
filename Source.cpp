#include <iostream>

int main()
{
	// Arrays are collection of elements of the same type placed in contiguous memory locations


	int array[100] = {0}; // initialize only one will make every element 0 by default

	int n;
	std::cin >> n;

	// Input
	for (int i = 0; i < n; i++) {
		std::cin >> array[i];
	}

	// Output
	for (int i = 0; i < 100; i++) {
		std::cout << array[i] << ", ";
	}
	std::cout << std::endl;


	std::cin.get();
}
