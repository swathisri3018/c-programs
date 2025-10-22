#include <iostream>
#include <cstring> 
using namespace std;
int main() {
    char str1[100] = "Hello, ";
    char str2[] = "World!";
    char str3[] = "Hello, Universe!";
    char str4[] = "Universe";
    cout << "Length of str2: " << strlen(str2) << endl;
    if (strncmp(str1, str3, 5) == 0)
        cout << "First 5 characters of str1 and str3 are equal." << endl;
    else
        cout << "First 5 characters of str1 and str3 are NOT equal." << endl;
      strncat(str1, str2, 3); 
    cout << "After strncat: str1 = " << str1 << endl;
    char* posChar = strchr(str3, 'U');
    if (posChar)
        cout << "'U' found in str3 at position: " << (posChar - str3) << endl;
    else
        cout << "'U' not found in str3." << endl;
    char* posSubstr = strstr(str3, str4);
    if (posSubstr)
        cout << "\"" << str4 << "\" found in str3 at position: " << (posSubstr - str3) << std::endl;
    else
        cout << "\"" << str4 << "\" not found in str3." << endl;
    return 0;
}
