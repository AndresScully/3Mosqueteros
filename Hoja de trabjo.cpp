#include<iostream>
#include<stdlib.h>

using namespace std;

//clases
class empleado {

private://atributos

	int cod, Nocuenta, sueldo, tiempo;
	string nombre, fecha;
	float igss, _interes;


public: //metodos

	empleado(int, string, int, string, int);//constructor

	void datos();
	void IGSS();
	void interes();
	void mostrar();
	
};



//constructor, nos sirve a inicializar los atributos
empleado::empleado(int _cod, string _nombre, int _sueldo, string _fecha, int _Nocuenta) {

	cod = cod;
	nombre = nombre;
	sueldo = sueldo;
	fecha = fecha;
	Nocuenta = Nocuenta;
	

}



//pide los datos
void empleado::datos() {


	cout << "Escriba el Nombre del empleado: ";
	getline(cin, nombre);
	
	
	cout << "\nEscriba la Fecha de nacimiento: ";
	getline(cin, fecha);
	
	
	cout << "\nEscriba el codigo del empleado: ";
	cin >> cod;

	cout << "\nIngrese el Sueldo base: ";
	cin >> sueldo;

	

	cout << "\nIngresa la No cuenta bancaria: ";
	cin >> Nocuenta;
	
}



//calcula el iggs
void empleado::IGSS() {
	
	igss = sueldo * 0.0483;
	
}

//calcula  el interes de cuenta
void empleado::interes() {

	float tasa;
	
	cout << "\n\n*****CALCULAR INTERES*****";
	cout << "\n\nIngrese la tasa del interes: ";
	cin >> tasa;
	cout << "\nIngrese el periodo del tiempo en meses: ";
	cin >> tiempo;
	_interes = sueldo*(tasa/100)*tiempo;

	
}



//muestra los datos
void empleado::mostrar() {
	
	;
	cout << "\nCODIGO: " << cod << endl;
	cout << "\nNOMBRE: " <<nombre << endl;
	cout << "\nSUELDO: " << sueldo << endl;
	cout << "\nFECHA: " << fecha << endl;
	cout << "\nNo. cuenta: " << Nocuenta << endl;
	cout << "\nEl iggs sobre su sueldo base es:" << igss << endl;
	cout << "\nEl interes obtenido en " << tiempo << " meses es de: " << _interes << endl;
}



int main() {

	empleado e1(1, "nombre", 2, "fecha", 3);
	e1.datos();
	system("cls");
	cout << "****SE COMPLETO EL REGISTRO*****" << endl;

	e1.IGSS();
	system("cls");
	cout << "****SE CALCULO EL IGSS*****" << endl;

	e1.interes();
	system("cls");
	cout << "****SE CALCULO EL INTERES*****" << endl;
	
	cout << "\n\n\n****MOSTRANDO TODOS LOS DATOS*****" << endl;
	e1.mostrar();
	

	system("pause");
	return 0;
}
