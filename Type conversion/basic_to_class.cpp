#include <iostream>
using namespace std;

// Basic to class type conversion

class Time
{
	int hour, min;
	public: 
		Time(int a = 0) {
			hour = a / 60;
			min = a % 60;
		}

		void getTime() {
			cout << "Hours is: " << hour << endl;
			cout << "Minutes is: " << min << endl;
		}

};

int main() {
	cout << "Wr" << endl;

	Time T;
	T = 450;
	T.getTime();
	return 0;
}
