#include <iostream>
#include <cmath>   
using namespace std;
int main() {
    double number = 9.75;

    cout << "Original number: " << number << std::endl;

    cout << "trunc(" << number << ") = " << trunc(number) << std::endl;

    cout << "sqrt(" << number << ") = " << sqrt(number) << std::endl;

    cout << "pow(" << number << ", 2) = " << pow(number, 2) << std::endl;

    cout << "floor(" << number << ") = " << floor(number) << std::endl;

    cout << "ceil(" << number << ") = " << ceil(number) << std::endl;

    return 0;
}
