#include <iostream>

// print all pairs of elements
void PrintAllPairs(int arr[], int n) {
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			std::cout << "(" << arr[i] << "," << arr[j] << ")" << "  ";
		}
		std::cout << std::endl;
	}
}

int main()
{
	int arr[] = { 10,17,20,30,36,40,50,64,76 };
	int size = sizeof(arr) / sizeof(int);

	PrintAllPairs(arr, size);

	std::cin.get();
}
