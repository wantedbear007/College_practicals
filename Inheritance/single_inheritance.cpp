#include<iostream>
using namespace std;

class A
{
	int a, b;
	public:
	
	void getData(int x, int y) {
		a = x;
		b = y;
	}

	void Display() {
		cout << "Val1: " << a << " val2: " << b << endl;
	}

	void getAddition() {
		cout << "value is: " << a + b << endl;
	}

};

class B : public A
{
	public:
		B() {
			cout << "Constructor called" << endl;
		}
};

int main() {
	cout << "Hello, world" << endl;
	A a1;
	a1.getData(10, 34);
	a1.Display();
	B b1;
	b1.getData(44, 55);
	b1.getAddition();
	return 0;
} 
