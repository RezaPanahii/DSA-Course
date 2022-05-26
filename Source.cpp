#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

double calculateGrades(vector<double> grades) {
    return grades[0] + grades[1] + grades[2];
}

bool compare(pair<string, vector<double> > p1, pair<string, vector<double> > p2) {
    double m1 = calculateGrades(p1.second);
    double m2 = calculateGrades(p2.second);

    return (m1 > m2);
}

int main()
{

    vector<pair<string, vector<double> > > students = {
        { "Reza", { 20, 20, 20 } },
        { "Sara", { 2.5, 3.5, 5 } },
        { "Amir", { 12, 14, 19 } },
        { "Neda", { 7, 15, 9 } },
    };

    sort(students.begin(), students.end(), compare);

    for (auto x : students) {
        cout << x.first << " " << calculateGrades(x.second) << endl;
    }

    return 0;
}
