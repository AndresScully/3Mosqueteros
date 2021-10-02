#include<iostream>
#include<iomanip>

using namespace std;

void output(int a[10][10]);

const int row = 10;
const int col = 10;

int main()
{
	srand(time(NULL));

	int array[row][col];
	int r, c, sum = 0;

	for (int r = 0; r < row; r++) 
	{
		for (int c = 0; c < col; c++)
		{
			array[r][c] = rand() % 100;
		}
	}

	for (int r = 0; r < row; r++)
	{
		for (int c = 0; c < col; c++)
		{
			cout << setw(3) << array[r][c];
		}
		cout << endl;
	}

	cout << endl;
	cout << "sums for each row: " << endl;

	for (int r = 0; r < row; r++)
	{
		for (int c = 0; c < col; c++)
		{
			sum = sum + array[r][c];
		}
		cout << sum  << endl;
		sum = 0;
	}

	return 0;
}