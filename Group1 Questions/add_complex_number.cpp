#include <iostream>
using namespace std;

class Complex
{
	public:
	int a, b;
	
	Complex(int a = 0, int b = 0) {
		this-> a = a;
		this-> b = b;
	}

	Complex complexAddition(Complex c1, Complex c2) {
		Complex c3;
		c3.a = c1.a + c2.a;
		c3.b = c1.b + c2.b;

		return c3;
	}
};

int main() {
	cout << "Program is working fine " << endl;
	Complex c1(10, 20), c2(4, 7);
	cout << "Complex number 1 is: " << c1.a << " + i" << c1.b << endl;
	cout << "Complex number 2 is: " << c2.a << " + i" << c2.b << endl;
	Complex c3;
	c3 = c3.complexAddition(c1, c2);
	cout << "Sum of complex numbers are: " << c3.a << " + i" << c3.b << endl;
	return 0;
}
