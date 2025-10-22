#include <iostream>
using namespace std;
int main() {
    int x;
    bool found = false;

    cout << "Finding at least one root of the equation x^2 - 5x + 6 = 0\n";
    for (x = -100; x <= 100; ++x) {
        int result = x * x - 5 * x + 6;
        if (result == 0) {
            cout << "One root found: x = " << x << endl;
            found = true;
            break; 
        }
    }

    if (!found) {
        cout << "No integer root found in the range.\n";
    }

    return 0;
}
