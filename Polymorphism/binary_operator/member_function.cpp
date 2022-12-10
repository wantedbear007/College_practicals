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
		cout << "Value 1 is: " << a << endl;
		cout << "Value 2 is: " << b << endl;
	}

	A operator+(A x) {
		A y;
		y.a = x.a + a;
		y.b = x.b + b;

		return y;
	}

};

int main() {
	cout << "Program is working fine" << endl;

	A a1(20, 10), a2(30, 40), a3;
	a3 = a1 + a2;
	
	a3.display();
	return 0;
}
