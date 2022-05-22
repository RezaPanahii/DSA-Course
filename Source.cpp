#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

void staircaseSearch(int arr[][10], int key, int n, int m)
{
    int i = 0;
    int j = m-1;
    int temp = arr[i][j];

    int counter = 0;
    while (temp != key)
    {
        if (key > temp) i++;
        else j--;
        temp = arr[i][j];
        counter++;
        cout << "try no. 1" << counter << "and number is " << temp << endl;
        if (temp == arr[n - 1][0]) break;
    }

    if (key == temp) {
        cout << "Key found at index [" << i << "]" << "[" << j << "]" << endl;
    }
    else {
        cout << "Key not found!" << endl;
    }
}
int main()
{
    int arr[][10] = {{1, 2, 3, 4},
                     {5, 6, 7, 8},
                     {9,10,11,12},
                     {13,14,15,16} };

    staircaseSearch(arr, 14, 4, 4);

    return 0;
}
