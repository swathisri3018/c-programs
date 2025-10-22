#include <iostream>
using namespace std;
class Box {
private:
    int length, width;
public:
    void setDimensions(int length, int width) {
        this->length = length;
        this->width = width;
    }
    int area() {
        return length * width;
    }
    void display() {
        cout << "Length = " << length << ", Width = " << width << endl;
    }
    Box* getPointer() {
        return this;
    }
};
int main() {
    Box b;
    b.setDimensions(10, 5);
    b.display();
    cout << "Area = " << b.area() << endl;
    Box* ptr = b.getPointer();
    cout << "Address of object b: " << ptr << endl;
    return 0;
}

