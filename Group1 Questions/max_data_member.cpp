#include <iostream>
using namespace std;

class A
{
	public:
	int a;

	A(int a) {
		this-> a = a;
	}

	friend class B;

};

class B 
{
	public:
		int b;
		B(int b = 0) {
			this-> b = b;
		}

		friend class A;

		void getMax(A &a1, B &b1) {
			if (a1.a > b1.b) {
				cout << "A's variable is greater then B" << endl;
			} else cout << "B's variable is greater then A" << endl;
		}
};

int main() {
	cout << "Program is working fine" << endl;
	A a1(10);
	B b1(20), c1;
	c1.getMax(a1, b1);
	return 0;
}
	













