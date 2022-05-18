#include <iostream>

void PrintSubarrays(int arr[], int n) {
	for (int i = 0; i < n; i++) {
		for (int j = i; j < n; j++) {
			std::cout << "(";
			for (int k = i; k <= j; k++) {
				std::cout << arr[k] << ",";
			}
			std::cout << ")" << std::endl;
		}
		std::cout << std::endl;
	}
}

int main()
{
	int arr[] = { 2,4,6,8,10,12,14,16,18 };
	int size = sizeof(arr) / sizeof(int);

	PrintSubarrays(arr, size);

	std::cin.get();
}
