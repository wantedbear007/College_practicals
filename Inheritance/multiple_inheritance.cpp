#include <iostream>
using namespace std;

class A
{
	public:
	void a_display() {
		cout << "this is a member function of class A." << endl;
	}

};

class B
{
	public: 
		void b_display() {
			cout << "This is a member function of classs B." << endl;
		}
};
class C : public A, public B
{
	public:
		void c_display() {
			cout << "This is a member function of class C." << endl;
	}
};

int main() {
	cout << "Program is working" << endl;
	C c1;
	c1.a_display();
	c1.b_display();
	c1.c_display();
	
	return 0;
}

