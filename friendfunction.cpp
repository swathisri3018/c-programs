#include <iostream>
using namespace std;
class Numbers {
private:
    float num1, num2;
public:
    Numbers(float a, float b) {
        num1 = a;
        num2 = b;
    }
    friend float calculateMean(Numbers n);
};
float calculateMean(Numbers n) {
    return (n.num1 + n.num2) / 2;
}
int main() {
    float a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    Numbers obj(a, b);
    float mean = calculateMean(obj);
    cout << "Mean value = " << mean << endl;
    return 0;
}

