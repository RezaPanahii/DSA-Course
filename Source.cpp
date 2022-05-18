#include <iostream>

void PrintSumSubarrays(int arr[], int n) {
	int sum  = 0;
	int largest = 0;

	for (int i = 0; i < n; i++) {
		std::cout << "start with " << arr[i]<< " :  ";
		for (int j = i; j < n; j++) {
			for (int k = i; k <= j; k++) {
				sum += arr[k];
			}
			std::cout << sum << "\t";
			if (sum > largest) {
				largest = sum;
			}
			sum = 0;
		}
		std::cout << std::endl;
	}
	std::cout << std::endl << "the largerst sum is : " << largest;
}

int main()
{
	int arr[] = { 2,4,6,8,10,12,14,16,18 };
	int size = sizeof(arr) / sizeof(int);

	PrintSumSubarrays(arr, size);

	std::cin.get();
}
