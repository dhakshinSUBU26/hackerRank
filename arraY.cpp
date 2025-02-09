#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    // Check if n is valid
    if (n <= 0 || n > 1000000) {  
        return 1; 
    }

    vector<int> arr(n); 

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = n - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }

    return 0;
}
