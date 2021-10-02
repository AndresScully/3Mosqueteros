#include<iostream>

using namespace std;

void insertion(int a[]);

const int num = 20;

int main()
{
	srand(time(NULL));

	int grades[num];

	cout << "Unsorted Array: " << endl;
	cout << endl;
	for (int i = 0; i < num; i++)
	{
		grades[i] = rand() % 101;
		cout << grades[i] << endl;
	}

	cout << endl;
	insertion(grades);

	cout << "Sorted Array: " << endl;
	cout << endl;
	for (int i = 0; i < num; i++)
	{
		cout << grades[i] << endl;
	}

}

void insertion(int a[])
{
	int f, j;
	for (int i = 1; i < num; i++) {
		f = a[i];
		j = i;
		while (j > 0 && a[j - 1] > f) {
			a[j] = a[j - 1];
			j--;
		}
		a[j] = f;
	}
}

/*
ARRAYS BEIING PASSED TO FUNCTIONS:

variables need atype and name and by defalut they pass by value
arrays, they need typen name and be specified tobe an array using [] however the size does not nee to be specified in the prototype and by default they are passed by reference

ex:
double classAverage(double g[], int size)

GLOBAL VARIBLES: global variables are availabel to all functions, declare them before main but after the prototypes, they are the same as other variables

EXAMPLE/ADD ON for insertion defenition:

for i = 1 to indexOfLastUnsortedElement-1

*/