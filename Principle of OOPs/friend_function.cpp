#include <iostream>
using namespace std;

// Program for friend function

class Terminal
{	
	int a, b;
	public: 

	Terminal(int a, int b) {
		this->a = a;
		this->b = b;
	}

	friend void getAddition(Terminal);

};

void getAddition(Terminal t) {
	cout << "Ans is: " << t.a + t.b << endl;
}

int main() {
	cout << "Program is working \n " << endl;
	Terminal t(10, 40);

	getAddition(t);
	return 0;

}
