#include<iostream>

using namespace std;


bool esPrimo(int* num);



int main(void) {

	int num, * posicion;
	
	posicion = &num;

	cout << "Ingrese un numero: "; 
	cin >> *posicion;

	
	

	bool resp = esPrimo(posicion);



	if (resp) {
		cout << '\n' << *posicion << " es numero primo" << endl;
		cout << "Su direccion de memoria es: " << posicion << endl;
	}


	else {
		cout << '\n' << *posicion << " No es numero primo" << endl;
		cout << "\nSu direccion de memoria es: " << posicion << endl;
	}

	return 0;
}



bool esPrimo(int* num) {
	bool primo = false;

	if (*num > 1) {
		primo = true;

		if (*num != 2 && *num != 3 && *num != 5) {

			for (int i = 2; i <= 5; i += (i - 1)) {

				if (*num % i == 0) {
					primo = false;
					break;
				}
			}
		}
	}

	return primo;
}
