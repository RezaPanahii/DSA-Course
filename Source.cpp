#include <iostream>

bool LinearSearch(const int arr[], const int n, const int key) {
	for (int i = 0; i < n; i++) {
		if (arr[i] == key) {
			std::cout << "Key found in index " << i + 1 << std::endl;
			return true;
			break;
		}
	}
	return false;
}

int main()
{
	int arr[] = { 10,20,30,40,50,64,76,45,23,19 };
	int size = sizeof(arr) / sizeof(int);
	int key = 76;

	LinearSearch(arr, size, key);

	std::cin.get();
}
