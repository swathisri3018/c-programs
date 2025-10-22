#include <iostream>
#include <string>
using namespace std;
int main() {
    string str1 = "Hello";
    string str2("World");
    string combined = str1 + " " + str2;
    cout << "Combined string: " << combined << endl;
    string fullName;
    cout << "Enter your full name: ";
    getline(cin, fullName); // safer than cin >> fullName
    cout << "Your name is: " << fullName << endl;
    cout << "Length of your name: " << fullName.length() << endl;
    string sub = fullName.substr(0, 5);
    cout << "First 5 characters: " << sub << endl;
    string a = "Apple";
    string b = "Banana";
    if (a == b) {
        cout << "Strings are equal" << endl;
    } else {
        cout << "Strings are not equal" << endl;
    }
    string sentence = "I love programming in C++.";
    size_t pos = sentence.find("C++");
    if (pos != string::npos) {
        sentence.replace(pos, 3, "Python");
    }
    cout << "Modified sentence: " << sentence << endl;
    cout << "Characters in your name: ";
    for (char ch : fullName) {
        cout << ch << ' ';
    }
    cout << endl;
    return 0;
}
