#include <iostream>

void InsertionSort(int arr[], int count) {
	int temp = 0;
	int current = 0;
	int prev = 0;
	for (int i = 1; i < count; i++) {
		current = arr[i];
		prev = i - 1;
		while (prev >= 0 and arr[prev] > current) {
			arr[prev + 1] = arr[prev]; // move prev one step ahead
			prev--; // prev points on the prev location
		}
		arr[prev + 1] = current; // put the element in the empty position
	}

	for (int i = 0; i < count; i++) {
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
}

int main()
{
	int arr[] = { 10,7,2,5,6,2,1 };
	int size = sizeof(arr) / sizeof(int);

	InsertionSort(arr, size);

	std::cin.get();
}
