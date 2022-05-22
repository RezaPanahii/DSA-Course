#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

pair<int,int> staircaseSearch(int arr[][10], int key, int n, int m)
{
    if (key < arr[0][0] or key > arr[n - 1][m - 1])
        return { -1,-1 };

    int counter = 1;
    int i = 0;
    int j = m-1;
    while (i <= n - 1 and j >= 0) {
        // debug purpose
        cout << "try no. " << counter << " and number is " << arr[i][j] << endl;
        counter++;


        if (key == arr[i][j])
            return { i,j };
        else if (key > arr[i][j])
            i++;
        else
            j--;
    }

    return { -1,-1 };
}
int main()
{
    int arr[][10] = {{1, 2, 3, 4},
                     {5, 6, 7, 8},
                     {9,10,11,12},
                     {13,14,15,16} };

    pair<int,int> cordi = staircaseSearch(arr, 11, 4, 4);

    if (cordi.first == -1) {
        cout << "Key not found!" << endl;
    }
    else
        cout << "Key found at [" << cordi.first+1 << "," << cordi.second+1 << "]" << endl;

    return 0;
}
