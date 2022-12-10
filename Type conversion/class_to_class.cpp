#include <iostream>
using namespace std;

class A
{
	public:
		
		string str = "Geeksforgeeks";
		
		void get_String(string strrr) {
			str = strrr;
		}
		string get_String() {
			return str;
		}


		void display() {
			cout << "Get ans: " << str << endl;
		}

};

class B
{
	public:
		string new_str;
		void operator=(A a) {
			new_str = a.str;
		}


		void getData() {
			cout << "String is: " << new_str << endl;

		}

};

int main() {
	cout << "program is working " << endl;
	A a1;
	string str;
	cout << "Enter the string value: "; cin >> str;
	a1.get_String(str);
	B b1;
	b1 = a1;
	a1.display();
	b1.getData();
	return 0;
}
