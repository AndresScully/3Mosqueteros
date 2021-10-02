#include <iostream>
using namespace std; 

int arrayData;

int main() { //this is for the unput for the coordinates and also the example array

	string ans1;

	const int c = 10;
	const int r = 10;

	int array[c][r];

	cout << "enter the data for the array" << endl;
	cin >> arrayData;

	system("cls");

	cout << "your array should consist of " << arrayData << " numbers"<< endl;

}