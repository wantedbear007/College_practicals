#include<iostream>
using namespace std;

class Area
{
	int length, breadth;
	public:

	Area(int len, int br) {
		length = len;
		breadth = br;
	}
	
	int getArea() {
		return length * breadth;
	}

};

int main() {
	cout << "Program is working fine" << endl;
	Area a1(23, 43);
	cout << "The area is: " << a1.getArea() << endl;
	return 0;
}
