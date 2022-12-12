#include <bits/stdc++.h>
using namespace std;

class Quadratic
{
	int a, b, c, rootval = 0, plus_val = 0, sub_val = 0, temp = 0;
	public:
	Quadratic(int a, int b, int c) {
		this-> a = a;
		this-> b = b;
	}
	// x = root (b * b - 4ac)
	// y = b - x / 2a;
	// y = b + x / 2a;
	void getAnswer() {
		temp = (b * b) - (4 * a * c);
		rootval = sqrt(abs(temp));
		plus_val = (b - rootval) / 2 * a;
		sub_val = (b + rootval) / 2 * a;
	}

	void display() {
		cout << "The plus value is: " << plus_val << endl;
		cout << "Negative value is: " << sub_val << endl;
	}

};

int main() {
	cout << "Program is working fine" << endl;
	Quadratic q1(1, -7, 10);
	q1.getAnswer();
	q1.display();
	return 0;
}
		

