#include <iostream>
using namespace std;

class A
{
	int a;
	public:
		A(int a) {
			this -> a = a;
		}
	void operator-() {
		a = -a;
	}

	void display() {
		cout << "Overloaded operator is: " << a << endl;
	}

};

int main() {
	cout << "Program is working" << endl;
	A a1(10);
	-a1;
	a1.display();

	return 0;
}
