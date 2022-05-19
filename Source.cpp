#include <iostream>
#include <algorithm>
#include <vector>

using std::cout;
using std::endl;

// works only with arrays of positive values
void CountingSort(std::vector<int>& arr) {
	int max = 0;

	// findinf maximum element
	for (int i = 0; i < arr.size(); i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}

	// create a count array
	std::vector<int>  frequency(max+1, 0);

	// update frequency array
	for (int x : arr) {
		frequency[x]++;
	}

	// put back elements from frequency to arr
	int j = 0;
	for (int i = 0; i < max+1; i++) {
		while (frequency[i] > 0) {
			arr[j] = i; // putting back values to arr
			frequency[i]--; // decrese value of frequency
			j++; // increase position of arr
		}
	}

	// print arr
	for (int x : arr) {
		cout << x << " ";
	}
	cout << endl;
}

int main()
{
	std::vector<int> arr = { 10,7,12,5,5,32,61,2,1 };

	CountingSort(arr);
	
	std::cin.get();
}
