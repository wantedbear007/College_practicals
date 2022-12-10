#include <iostream>
using namespace std;

// this is class to basic type
`
class Time 
{
	int hour, min;
	public:
	Time( int h = 0, int m = 0) {
		hour = h; min = m;
	}

	operator int() {
		int m = hour + (min * 60);
		return m;
	}
};

int main() {
	
	Time T(10, 35);
	int x = T;
	cout << "This is lol: " << x << endl;
	return 0;
}
