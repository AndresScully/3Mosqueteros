#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	float n;
	float notas[10];
//	float nota1, nota2, nota3, nota4, nota5, nota6, nota7, nota8, nota9, nota10, nota11, nota12, nota13, nota14, nota15;
	float promf;
	
	
	do {
			cout<<"Ingrese la cantidad de notas a ingresar:";
			cin>>("%n", n);
		
			for (int i=0; i < n; i++)
			{
				cout<<("Ingrese la nota %n", i+1);
				cin>>("%d", notas[i]);
			}
			promf=notas/n
			printf("El promedio es %.1f\notas"<<promf<<endl;
			
			return 0;	
        }





//	cin>>nota1;
//	cout<<"Ingrese la nota 2:";
//	cin>>nota2;
//	promf=(nota1 + nota2)/2;
//	cout<<"su promedio final es:"<<promf<<endl;
}

