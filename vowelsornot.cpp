#include <iostream>
using namespace std;
int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    if (ch >= '0' && ch <= '9') {
        cout << "It is a number." << endl;
    } 
    else if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        switch (ch) {
            case 'a': case 'e': case 'i': case 'o': case 'u':
            case 'A': case 'E': case 'I': case 'O': case 'U':
                cout << "It is a vowel." << endl;
                break;
            default:
                cout << "It is a consonant." << endl;
                break;
        }
    } 
    else {
        cout << "It is neither a letter nor a number (special character)." << endl;
    }

    return 0;
}
