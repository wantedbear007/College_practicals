#include <iostream>
using namespace std;

// Declaration of classes 

class Wanted
{
	int a, b;
	public:
	// Constructor 
	Wanted(int a, int b) {
		cout << "Constructor called" << endl;
		this->a = a;
		this->b = b;
	}

	void getAddition() {
		cout << "Addition is: " << a + b << endl;
	}

	// Destructor
	~Wanted() {
		cout << "Destructor called " << endl;
	}
};


int main()
{
	cout << "Program is working \n" << endl;
	Wanted a(10, 20);
	a.getAddition();

	return 0;
}
