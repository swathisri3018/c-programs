#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "\nResults from 1 to " << n << ":\n";
     for (int i = 1; i <= n; ++i) {
        if (i % 2 == 0) {
              cout << "Even: " << i << "^3 = " << pow(i, 3) << std::endl;
        } else {
            cout << "Odd: " << i << "^2 = " << pow(i, 2) << std::endl;
        }
    }
    return 0;
}
