#include<iostream>
using namespace std;

const int num = 1;

int main()
{
	int agua[num];
	int cantAgua = 0;
	srand(time(NULL));

	cout << "Departamento # 1: " << endl;
	while (cantAgua != 10) {
		for (int i = 0; i < num; i++) // agua
		{
			agua[i] = rand() % 49 + 1;
			cout << agua[i] << ", ";
		}
		cantAgua = cantAgua + 1;
	}
	cout << endl;

	return 0;
}