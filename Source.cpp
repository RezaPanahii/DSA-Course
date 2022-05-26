#include <iostream>
#include "vector.h"
using namespace std;

int main()
{

    vector<int> vec(4, 10);

    vector<int> vec2(6, 2);

    vec2 = vec;

    cout << vec2.size() << endl;
    cout << vec2.capacity() << endl;

    for (int i = 0; i < vec2.size(); i++) {
        cout << vec2[i] << " ";
    }


    return 0;
}
