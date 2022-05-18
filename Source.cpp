#include <iostream>

void LargestSumSubarrays(int arr[], int n) {
	int largest = 0;
	int sum;
	int prefix[n] = { 0 };

	prefix[0] = arr[0];
	for (int i = 1; i < n;i++) {
		prefix[i] = prefix[i-1] + arr[i];
	}

	for (int i = 0; i < n; i++) {
		for (int j = i; j < n; j++) {
			sum = (i > 0) ? prefix[j] - prefix[i - 1] : prefix[j];
			if (sum > largest) {
				largest = sum;
			}
		}3 
	}
	std::cout << "Largest subarray sum is " << largest << std::endl;
}

int main()
{
	int arr[] = { 2,4,6,-8,10,-12,-14,16,18 };
	int size = sizeof(arr) / sizeof(int);

	LargestSumSubarrays(arr, size);

	std::cin.get();
}
