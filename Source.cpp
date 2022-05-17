#include <iostream>

void reverseArray(int arr[], const int n) {
	int start = 0, end = n - 1;
	int temp = 0;

	while (start < end) {
		std::swap(arr[start], arr[end]);

		start++;
		end--;
	}
}

int main()
{
	// Arrays are collection of elements of the same type placed in contiguous memory locations


	int arr[] = { 10,20,30,40,50,64,76 };
	int n = sizeof(arr) / sizeof(int);
	
	std::cout << "Before modification: ";
	for (int i = 0; i < n; i++) {
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;

	reverseArray(arr, n);

	std::cout << "After modification: ";
	for (int i = 0; i < n; i++) {
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;

	std::cin.get();
}
