
#include <iostream>
using namespace std;

class A
{
	int a, b;
	public:

	A(int a = 0, int b = 0) {
		this-> a = a;
		this-> b = b;
	}

	void display() {
		cout << "value 1 is: " << a << endl;
		cout << "value 2 is: " << b << endl;
	}

	friend A operator+(A a1, A &a2);
};

A operator+(A a1, A &a2 ) {
	A a3;
	a3.a = a1.a + a2.a;
	a3.b = a1.b + a2.b;
	
	return a3;
}

int main() {
	cout << "Program is working fine" << endl;
	A x(20, 40), y(10, 40), z;

	z = x + y;
	z.display();
	return 0;

}
