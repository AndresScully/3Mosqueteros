#include<iostream>

using namespace std;

int main()
{
	srand(time(NULL));

	int evens = 0;
	int odds = 0;

	const int num = 25;

	int array[num];

	for (int i = 0; i < num; i++)
	{
		array[i] = rand() % 100 + 1;

		cout << array[i] << endl;
	}

    for (int i = 0; i < num; i++) {

        if (array[i] & 1 == 1)
            odds++;
        else
            evens++;
    }

	cout << endl;
    cout << "The number of even numbers is " << evens << endl;
    cout << "The number of even numbers is " << odds << endl;

	return 0;
}