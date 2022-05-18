#include <iostream>

void LargestSumSubarrays(int arr[], int n) {
	int currentSum = 0;
	int maxSum = 0;
	for (int i = 0; i < n; i++) {
		currentSum += arr[i];
		if (currentSum <= 0) {
			currentSum = 0;
		}
		else if (currentSum > maxSum) {
			maxSum = currentSum;
		}
	}
	std::cout << "the largest subarray is " << maxSum << std::endl;
}

int main()
{
	int arr[] = { -2,4,6,-8,-23,-10,17,-12,-14,16,-18 };
	int size = sizeof(arr) / sizeof(int);

	LargestSumSubarrays(arr, size);

	std::cin.get();
}
