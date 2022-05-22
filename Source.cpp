#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

void spiralPrint(int arr[][10], int n, int m) 
{
    int startRow = 0;
    int endRow = n - 1;
    int startCol = 0;
    int endCol = m - 1;

    while (startRow <= endRow and startCol <= endCol) {
        // start row
        for (int col = startCol; col <= endCol; col++) {
            cout << arr[startRow][col] << " ";
        }
        cout << endl;
        // end col
        for (int row = startRow + 1; row <= endRow; row++) {
            cout << arr[row][endCol] << " ";
        }
        cout << endl;

        // end row
        for (int col = endCol - 1; col >= startCol; col--) {
            if (startRow == endRow) break;
            cout << arr[endRow][col] << " ";
        }
        cout << endl;

        // start col
        for (int row = endRow - 1; row >= startRow + 1; row--) {
            if (startCol == endCol) break;

            cout << arr[row][startCol] << " ";
        }
        cout << endl;

        // update variables
        startRow++;
        endRow--;
        startCol++;
        endCol--;
    }
}

int main()
{
    int arr[][10] = { {1,2,3,4},
                     {5,6,7,8},
                     {45,67,23,90},
                     {9,10,11,12},
                     {13,14,15,16} };

    spiralPrint(arr, 5, 4);

    return 0;
}
