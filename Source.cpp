#include <iostream>

void SelectionSort(int arr[], int size) {
	int min = 0;
	int minPos = 0;

	for (int pos = 0; pos < size-1; pos++) {
		minPos = pos;

		// find minimum in the unsorted array
		for (int j = pos; j < size; j++) {
			// find element of minimum element
			if (arr[j] < arr[minPos]) {
				minPos = j;
			}
		}

		// swap minimum with current element
		std::swap(arr[pos], arr[minPos]);
	}

	// print arr[]
	for (int i = 0; i < size; i++) {
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
}

int main()
{
	int arr[] = { 10,7,12,-5,5,-32,61,2,1 };
	int size = sizeof(arr) / sizeof(int);

	SelectionSort(arr, size);

	std::cin.get();
}
