#include <iostream>
#include <string>
#include <vector>
using namespace std;

string CompressString(string str) {
    int n = str.length();
    int count = 1;
    string out;
    
    // abbbb
    for (int i = 0; i < n;i++) {
        count = 1;
        while (i < n - 1 and str[i] == str[i + 1]) {
            count++;
            i++;
        }
        
        out += str[i];
        if (count > 1)
            out += count+48;
    }

    return out;
}

int main()
{
    string s;
    getline(cin, s);

    cout << CompressString(s);

    return 0;
}
