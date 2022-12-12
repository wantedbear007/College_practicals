#include<iostream>
using namespace std;

template <class T>
T addition(T a, T b) {
	return a + b;
}

int main() {
	cout << "Program is working fine" << endl;
	int a, b;
	float z, x;

	cout << "Enter the integers number: " << endl;
	cin >> a >> b;
	cout << "Answer for integer is: " << addition(a, b) << endl;
	cout << "Enter the float values: " << endl;
	cin >> z >> x;
	cout << "The answer for float is: " << addition(z, x) << endl;

	return 0;
}
