#include <iostream>
using namespace std;
class Printer {
public:
    void print(int i) {
        cout << "Printing int: " << i << endl;
    }

    void print(double d) {
        cout << "Printing double: " << d << endl;
    }

    void print(string s) {
        cout << "Printing string: " << s << endl;
    }
};
int main() {
    Printer p;
    p.print(10);       
    p.print(3.14);     
    p.print("Hello");   
    return 0;
}
