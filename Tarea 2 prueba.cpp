#include <iostream>
#include <stdio.h> 
#include <stdlib.h>
#include <time.h> 

using namespace std;

const int num = 22;
const int anum = 31;

int main()
{
	int d, a;
	int agua[anum];
	int dep[num];
	
	double prom=0.0;


srand(time(NULL));
for (d=1; d<=num; d++)//loop departamentos
{
cout<<endl<<"Departamento #"<< dep<< ": " << endl;

for (a=1; a<=anum; a++) //inicia loop agua
{
				agua[a]= rand() % 50 + 1;
				cout << agua[a] << ", ";
				prom=prom+agua[a];
		}//termina loop agua
		
		prom=prom/31;
		cout<<endl<<"promedio:"<<prom<<"cms cubicos"<<endl;
}//termina loop departamentos y loop integrado
						
return 0;
}

