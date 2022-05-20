#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    system( "cls" );
    char sentence[1000];

    char temp = cin.get();

    int length = 0;
    while (temp != '@') {
        sentence[length++] = temp;
        temp = cin.get();
    }
    sentence[length] = '\0';

    cout << sentence << endl;
    cout << length << endl;

    return 0;
}


// template <typename R>
// R function( R a, R b ) {
//     T result = a + b;

//     return result;
// }
