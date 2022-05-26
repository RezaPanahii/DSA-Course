#include <iostream>
#include "vector.h"
using namespace std;

void function(vector<string>& str_vec) {
    std::cout << str_vec.size();
}

int main()
{
    // custom vector successfully created
    vector<string> vec(4, "Reza");

    function(vec);

    return 0;
}
