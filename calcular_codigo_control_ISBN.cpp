#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
	// define variables
	int isbn;
	int d1;
	int d2;
	int d3;
	int d4;
	int d5;
	int d6;
	int d7;
	int d8;
	int d9;
	int d10;
	div_t digit;

	//Recibe los digitos que entran
	cout << "Coloque los 9 digitos de su ISBN:" << endl;
	cout << "ISBN = ";
	cin >> isbn;

	//busca d9, d8, d7......d1
	d9 = isbn % 10;
	isbn = isbn / 10;
	d8 = isbn % 10;
	isbn = isbn / 10;
	d7 = isbn % 10;
	isbn = isbn / 10;
	d6 = isbn % 10;
	isbn = isbn / 10;
	d5 = isbn % 10;
	isbn = isbn / 10;
	d4 = isbn % 10;
	isbn = isbn / 10;
	d3 = isbn % 10;
	isbn = isbn / 10;
	d2 = isbn % 10;
	isbn = isbn / 10;
	d1 = isbn % 10;

	//realiza las multiplicaciones y las sumas
	d10 = ((d1 * 1) + (d2 * 2) + (d3 * 3) + (d4 * 4) + (d5 * 5) + (d6 * 6) + (d7 * 7) + (d8 * 8) + (d9 * 9)) % 11;

	//divide el total de la suma con 11 	
	digit = div(d10, 11);

	//muestra el resto de la division
	cout << "El resultado es:" << digit.rem << endl;


	//cout << "The ISBN is: " << digit; //d1 << d2 << d3 << d4 << d5 << d6 << d7 << d8 << d9;

	if (d10 == 10) {
		cout << "X ";
	}//cierra if

	else {
		cout << d10 << endl;
	}//cierra else


	system("pause");

	return 0;
}//cierra main