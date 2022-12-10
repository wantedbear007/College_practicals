#include <iostream>
using namespace std;

class A
{
	public:
		void a_fun() {
			cout << "A member function" << endl;
		}
};

class B : public A
{
	public:
		void b_fun() {
			cout << "B member function" << endl;
		}
};

class C : public B
{
	public:
		void c_fun() {
			cout << "C member function" << endl;
		}
};

int main() {
	cout << "Program is working \n " << endl;
	C c1;
	c1.a_fun();
	c1.b_fun();
	c1.c_fun();

	return 0;
}
