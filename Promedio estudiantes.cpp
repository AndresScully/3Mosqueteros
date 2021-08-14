#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	int nota, i, n, promf;
	char opcion[3];

	do {

		cout << "Ingrese la cantidad de notas a ingresar:";
		cin >> ("%n", n);

		for (i = 0; i < n; i++) //dependiendo la cantidad ingresada pedira las notas a ingresas
		{
			cout << "Ingrese la nota:";
			cin >> nota;
		}
		promf = nota / n;
		cout<<"El promedio es:" << promf << endl;

			cout << "Desea calcular mas promedios (si/no)?";
			cin >> ("%s", opcion);

	} while (opcion[0] == 's' || opcion[0] == 'S');
	return 0;
}