#include <iostream>
using namespace std;
class B; 
class A {
    private:
        int data;
    public:
        A() {
		        this->data=1;
}
        friend class B;
};
class B {
    public:
        void showData(A a) {
            std::cout << "Data from class A: " << a.data << std::endl;
        }
};
int main()
{
	B b; 
	A a;
	b.showData(a);	
}
