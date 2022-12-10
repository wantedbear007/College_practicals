
#include <iostream>
using namespace std;

class A
{
	int a, b;
	public:

	virtual void getData() {
		cout << "Class A wla hai call" << endl;
	}
};
class B : public A
{
	public: 
		void getData() {
			cout << "Class B wla call hai" << endl;
		}

};

int main() {
	cout << "hello, world" << endl;
	B b1;
	b1.getData();
	return 0;
}
