#include <iostream>
#include <iomanip>

using namespace std;

const int n = 20; //square size

int main()
{
	string answer; //for generation # control

	cout << "would you like to play? [y/n]" << endl;
	cin >> answer;
	cout << endl;

	if (answer == "y")
	{
		srand(time(NULL)); //example array
		int exArray[n][n]; //makes it is easier to understand where to place cells

		cout << "Example square: " << endl;
		cout << endl;

		for (int r = 0; r < n; r++)
		{
			for (int c = 0; c < n; c++)
			{
				exArray[r][c] = 'O';
			}
		}
		for (int r = 0; r < n; r++)
		{
			for (int c = 0; c < n; c++)
			{
				cout << setw(2) << exArray[r][c];
			}
		}
	}
}