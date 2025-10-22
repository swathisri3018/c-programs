#include <iostream>
#include <cctype>   
using namespace std;
int main() {
    char str[1000];
    int digitCount = 0, specialCharCount = 0;

    cout << "Enter a string: ";
    cin.getline(str, 1000); 

    for (int i = 0; str[i] != '\0'; ++i) {
        if (isdigit(str[i])) {
            digitCount++;
        }
        else if (!isalpha(str[i]) && !isdigit(str[i]) && !isspace(str[i])) {
                specialCharCount++;
        }
    }

    cout << "\nDigit count: " << digitCount << std::endl;
    cout << "Special character count: " << specialCharCount << std::endl;

    return 0;
}
