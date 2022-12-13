#include <iostream>
#include <fstream>
using namespace std;

class FileHandling
{
	char name[100];
	string mystr;
	int val = 0;
	public:
	fstream file;
	void getName() {
		cout << "Enter your name: " << endl;
		cin.getline(name, 100);
	}
/*
	void writeName() {
		file.open("names.txt", ios::out | ios::app);
		file << name << endl;
		file.close();
	
	}

	*/
	void readingFiles() {
		file.open("names.txt", ios::in );
			while (getline(file, mystr)) {
				cout << mystr << endl;
			
                        
			for (int i = 0; i < mystr.length(); i++) {
				val++;
			}}
			cout << "Value is: " << val << endl;
		file.close();
	}		
};

int main() {
	cout << "Program is working " << endl;
	FileHandling f1;
	//f1.getName();
	//f1.writeName();
	f1.readingFiles();
	return 0;
}


