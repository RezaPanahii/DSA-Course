#include <iostream>

bool BinarySearch(const int arr[], const int n, const int key) {
	int start = 0, end = n-1, mid;
	bool isKey = false;

	while (start <= end) {
		mid = (end + start) / 2;
		if (key < arr[mid]) {
			end = mid - 1;
		}
		else if (key == arr[mid]) {
			std::cout << "Key found at index " << mid + 1 << std::endl;
			isKey = true;
			return true;
			break;
		}
		else if (key > arr[mid]) {
			start = mid + 1;
		}
	}
	if (!isKey) {
		std::cout << "Key not found!" << std::endl;
		return false; 
	}
}

int main()
{
	// Binary search needs your search space monotonic (non decreasing or non increasing)

	int arr[] = { 10,17,20,30,36,40,50,64,76 };
	int size = sizeof(arr) / sizeof(int);
	int key = 176;

	BinarySearch(arr, size, key);

	std::cin.get();
}
