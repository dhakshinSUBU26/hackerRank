#include <iostream>
using namespace std;

void numberClassification(int start, int end) {
    string numWords[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    
    for (int i = start; i <= end; i++) {
        if (i >= 1 && i <= 9) {
            cout << numWords[i - 1] << endl; // Convert number to word
        } else if (i % 2 == 0) {
            cout << "even" << endl;
        } else {
            cout << "odd" << endl;
        }
    }
}

int main() {
    int a, b;
    cin >> a >> b;
    numberClassification(a, b);
    return 0;
}
