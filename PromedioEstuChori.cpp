#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	int nota, i, n;
	int notatotal = 0;
	double prom;
	char opcion[3];

	do {

		cout << "Ingrese la cantidad de notas a ingresar: ";
		cin >> ("%s", n);

		for (i = 0; i < n; i++) //dependiendo la cantidad ingresada pedira las notas a ingresas
		{
			cout << "Ingrese la nota: ";
			cin >> nota;
			notatotal = nota + notatotal;
		}
		prom = notatotal /n;
		cout << "El promedio es: " << prom << endl;

		cout << "Desea calcular mas promedios (si/no)?";
		cin >> ("%s", opcion);

	} while (opcion[0] == 's' || opcion[0] == 'S');

	return 0;
}