#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void input(double& real, double& imag); 
void cValue(double real, double imag); //funtion prototype for current value
double leng(double real, double imag); //funtion prototype for outputing length
void add(double& A, double& B, double C, double D); //addition function prototype
void sub(double& A, double& B, double C, double D); //substraction funtion prototype
void multi(double& A, double& B, double C, double D); //multiplication function prototype
bool div(double& A, double& B, double C, double D); //division funtion prototype

int main(void)
{
	char choice = 0;
	double A = 0; //setting these to zero or else it doesn't work
	double B = 0;
	double C;
	double D;

	cout << "Welcome to the Complex Number Calculator!" << endl;
	cout << "Here are your options: " << endl;
	cout << "+ (addition)" << endl;
	cout << "- (subtraction)" << endl;
	cout << "* (multiplication)" << endl;
	cout << "/ (division)" << endl;
	cout << "l (length)" << endl;
	cout << "i (new input)" << endl;
	cout << "q (quit)" << endl;
	cout << endl;

	while (choice != 'q')
	{
		cout << "Enter what you want to do: ";
		cin >> choice;

		switch (choice)
		{
		case 'i': //new input

			input(A, B);
			cValue(A, B);
			break;

		case 'l': //length and current value

			cout << "The length is " << fixed << setprecision(2) << leng(A, B) << endl;
			cValue(A, B);
			break;

		case '+': //additon

			input(C, D);
			add(A, B, C, D);
			break;

		case '-': //substraction

			input(C, D);
			sub(A, B, C, D);
			break;

		case '*': //multiplication

			input(C, D);
			multi(A, B, C, D);
			break;

		case '/': //division

			input(C, D);
			if (!div(A, B, C, D))
				cout << "Illegal attempt to divide by 0 " << endl;
			break;

		case 'q': //to end it and quit the program

			cout << "Thank you for using our calculator!" << endl;
			break;

		default: //for when there is a wrong input

			cout << "Not a valid choice" << endl;
			break;
		}
	}
	cout << endl;
	cout << "ended" << endl;
	return 0;
}

void input(double& real, double& imag)
{
	cout << "Please input real part: ";
	cin >> real;
	cout << "Please input imaginary part: ";
	cin >> imag;
}

void cValue(double real, double imag)
{
	cout << fixed << setprecision(2) << "Current value is " << real << " + " << imag << "i" << endl;
}

double leng(double real, double imag)
{
	return sqrt((real * real) + (imag * imag)); //gets the absolute value of the complex number
												//using the formula provided
}

void add(double& A, double& B, double C, double D)
{
	A = (A + C);
	B = (B + D);
	cValue(A, B);
}

void sub(double& A, double& B, double C, double D)
{
	A = (A - C);
	B = (B - D);
	cValue(A, B);
}

void multi(double& A, double& B, double C, double D)
{
	double AA;
	AA = A * C - B * D; //temporarily store the new real part in AA
	 B = B * D + A * C;
	A = AA; //now reassign a
	cValue(A, B);
}

bool div(double& A, double& B, double C, double D)
{
	if (C == 0 && D == 0)
		return false;

	A = (A * C + B * D) / (C * C + D * D); // follows the basic formula for dividing complex numbers
	B = (B * C - A * D) / (C * C + D * D) * 10; //except here it doesn't work without multiplying by 10

	cValue(A, B);
	return true;
}