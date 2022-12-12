#include <iostream>
using namespace std;

class Recursion
{
	public:

		int getFactorial(int a) {
			if (a <= 0) return 1;

			return a * getFactorial(a - 1);
		}

};

int main() {
	cout << "Program is working fine" << endl;
	Recursion r1;
	int ans = r1.getFactorial(5);
	cout << "The factorial is: " << ans << endl;
	return 0;
}
		
