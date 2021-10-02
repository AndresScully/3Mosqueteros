#include<iostream>

using namespace std;

struct car
{
	string name;
	int year;
	double topSpeed;
	bool isExpensive;
};

int main()
{
	car model1;
	car model2;

	cout << "Welcome to car compare! " << endl;
	cout << endl;

	cout << "Enter model name of the car: ";
	cin >> model1.name;

	cout << "What year was your car relesed? ";
	cin >> model1.year;

	cout << "What is the top speed? (MPH) ";
	cin >> model1.topSpeed;

	cout << "Is the car expensive? (0 or 1) ";
	cin >> model1.isExpensive;

	cout << endl;

	cout << "Name: " << model1.name << endl;
	cout << "Year: " << model1.year << endl;
	cout << "Top speed: " << model1.topSpeed << endl;
	cout << "Our redomendation is ";
	if (model1.isExpensive == true)
	{
		cout << "maybe don't buy it." << endl;
	}
	else
	{
		cout << "get it" << endl;
	}

	cout << endl;

	cout << "Next car " << endl;

	cout << "Enter model name of the car: ";
	cin >> model2.name;

	cout << "What year was your car relesed? ";
	cin >> model2.year;

	cout << "What is the top speed? (MPH) ";
	cin >> model2.topSpeed;

	cout << "Is the car expensive? (0 or 1) ";
	cin >> model2.isExpensive;

	cout << endl;

	cout << "Name: " << model2.name << endl;
	cout << "Year: " << model2.year << endl;
	cout << "Top speed: " << model1.topSpeed << endl;
	cout << "Our redomendation is ";
	if (model2.isExpensive == true)
	{
		cout << "maybe don't buy it." << endl;
	}
	else
	{
		cout << "get it" << endl;
	}
	cout << endl;
	cout << "You may now compare both cars";
	cout << endl;

	return 0;
}