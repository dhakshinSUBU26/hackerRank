#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;

int main() {
    // Complete the code.
    int a;
    long b;
    char c;
    float d;
    double e;
    cin >> a >> b >> c >> d >> e; /* getting the inputs*/
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << fixed<< setprecision(3) << d << endl;
    cout << fixed<< setprecision(9) << e << endl; /* display the output and using fixed to avoid scientific notation and setprecision to round off*/
    return 0;
}
