#include <iostream>
using namespace std;

class Velocity
{
	public:
	int d, t;
	Velocity(int d, int t) {
		this -> d = d;
		this -> t = t; 
	}

	void getVelocity() {
		try {
			if (d == 0) {
				throw 10;
			}

			else cout << "The answer is: " << d / t << endl;
		}
		catch (int x) {
			cout << "Divisiion by zero is lol " << endl;
		}
	}

};

int main() {
	cout << "This program is working great" << endl;
	Velocity v1(10, 20), v2(0, 20);
	v1.getVelocity();
	v2.getVelocity();

	return 0;
}
