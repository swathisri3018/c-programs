#include <iostream>
using namespace std;
int main() {
    int num, sum = 0;
    cout << "Enter a 5-digit number: ";
    cin >> num;
    if (num < 10000 || num > 99999) {
        cout << "Invalid input! Please enter a 5-digit number." << endl;
        return 1;
    }
    while (num > 0) {
        int digit = num % 10; 
        sum += digit;         
        num /= 10;            
    }
    cout << "Sum of digits: " << sum << endl;
    return 0;
}
