#include <iostream>
using namespace std;

class A
{
	public:
		virtual void getDisplay() = 0;
};

class B : public A
{
	public:
		void getDisplay() {
			cout << "hello bhaiii" << endl;
		}
};

int main() {
	cout << "Program is working fine" << endl;
	B b1;
	b1.getDisplay();
	return 0;
}

