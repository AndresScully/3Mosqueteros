#include<iostream>

using namespace std;

int main()
{
	srand(time(NULL));

	const int num = 5;

	int g[num];

	bool swapped;

	cout << "Unsorted Array: " << endl;
	for (int i = 0; i < num; i++)
	{
		g[i] = rand() % 101;
		cout << g[i] << endl;
	}

	{
		swapped = false;

		for (int i = 0; i < num - 1; i++)
		{
			if (g[i] > g[i + 1])
			{
				swap(g[i], g[i + 1]);

				swapped = true;
			}
		}
	} 	while (swapped == true);

	cout << "Sorted Array: " << endl;
	for (int i = 0; i < num; i++)
	{
		cout << g[i] << endl;
	}

	return 0;
}