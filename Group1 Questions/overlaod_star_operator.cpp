#include<iostream>
using namespace std;

class Overload
{
	int a, b;
	public:

	Overload(int a = 0, int b = 0) {
		this-> a = a;
		this-> b = b;
	}

	void display() {
		cout << "The first answer is:  " << a << endl;
		cout << "The second answer is: " << b << endl;
	}

	Overload operator*( Overload &b1) {
		Overload x;
		x.a = a * b1.a;
		x.b = b * b1.b;

		return x;
	}
};

int main() {
	cout << "Program is working fine" << endl;
	Overload a1(10, 20), b1(30, 40), c1;
	c1 = a1 * b1;
	c1.display();
	
	return 0;
}
