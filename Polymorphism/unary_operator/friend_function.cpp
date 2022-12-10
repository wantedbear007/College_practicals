#include <iostream>
using namespace std;

class A
{
	int a;
	public:
		A(int a) {
			this -> a = a;
		}

		void Display() {
			cout << "Overloaded operator is: " << a << endl;
		}

	friend void operator-(A &a1);
};

void operator-(A &a1) {
	a1.a = -a1.a;
}

int main() {
	cout << "Program is working" << endl;
	
	A z1(10);
	-z1;
	z1.Display();
	return 0;

}


