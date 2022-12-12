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

		friend Complex getComplex(Complex &a1, Complex &b1);
};

Complex getComplex(Complex &a1, Complex &b1) {
	Complex c1;
	c1.a = a1.a + b1.a;
	c1.b = a1.b + b1.b;
	
	return c1;
}


int main() {
	cout << "Program is working good" << endl;
	
	Complex c1(12, 45), c2(2, 5);
	cout << "The first complex number is: " << c1.a << " + i" << c1.b << endl;
	cout << "The second complex number is: " << c2.a << " + i" << c2.b << endl;
	
	Complex c3;
	c3 = getComplex(c1, c2);
	cout << "The answer is" << c3.a << " + i" << c3.b << endl;
	return 0;
}
