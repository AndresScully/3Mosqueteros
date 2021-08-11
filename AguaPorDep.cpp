#include<iostream>
using namespace std;

const int num = 1;

int main()
{
	int agua[num];
	int dep = 1;
	int cantAgua = 0;
	srand(time(NULL));

	while (dep != 23) {
		cout << "Departamento #" << dep << ": " << endl;
		while (cantAgua != 10) {
			for (int i = 0; i < num; i++) // agua
			{
				agua[i] = rand() % 49 + 1;
				cout << agua[i] << ", ";
			}
			cantAgua = cantAgua + 1;
		}
		cout << endl;
		dep = dep + 1;
	}

return 0;
}