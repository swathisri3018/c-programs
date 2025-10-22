#include <iostream>
using namespace std;
int fibonacci(int term) {
    if (term == 0)
        return 0;
    else if (term == 1)
        return 1;
    else
        return fibonacci(term - 1) + fibonacci(term - 2);
}
int main() {
    int n;
    cout << "Enter the upper limit (n): ";
    cin >> n;
    cout << "Fibonacci series from 1 to " << n << ":\n";
    int i = 0;
    int fib;
    while (true) {
        fib = fibonacci(i);
        if (fib > n)
            break;
        if (fib >= 1)
            cout << fib << " ";
        i++;
    }
    cout << endl;
    return 0;
}
