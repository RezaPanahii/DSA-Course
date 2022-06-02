#include <iostream>
#include <algorithm>

bool isSorted(int arr[], int n)
{
    if (n == 1 or n == 0)
    {
        return true;
    }
    if (arr[0] <= arr[1] and isSorted(arr + 1, n - 1))
    {
        return true;
    }
    return false;
}

bool isSortedTwo(int arr[], int i, int n)
{
    if (i == n - 1)
    {
        return true;
    }
    if (arr[i] < arr[i + 1] and isSortedTwo(arr, i + 1, n))
    {
        return true;
    }
    return false;
}

int main()
{
    int arr[5] = { 1,2,5,4,5 };

    bool result = isSortedTwo(arr, 0, 5);
    std::cout << result << std::endl;

    std::cin.get();
}
