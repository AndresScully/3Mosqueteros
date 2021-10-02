#include <iostream>
#include <iomanip>

using namespace std;

const int row = 20;
const int col = 20;

int main()
{
	string answer; //for control over the 

	cout << "would you like to play? (y)" << endl;
	cin >> answer;
	cout << endl;

	if (answer == "y")
	{
		srand(time(NULL));  //example array
		int array[row][col];//this is mostly so the input is easier

		cout << "use this to get an idea of where you want to set your live cells" << endl;
		cout << endl;

		for (int r = 0; r < row; r++) //this the example for the first grid
		{
			for (int c = 0; c < col; c++)
			{
				array[r][c] = 0;
			}
		}

		for (int r = 0; r < row; r++) //output of the example
		{
			for (int c = 0; c < col; c++)
			{
				cout << setw(2) << array[r][c];
			}
			cout << endl;
		}
		cout << endl;
		cout << "input the coordinates for the live cells in X, Y format" << endl;
		//this is where all the inputs should go

		cout << "y when done" << endl;
		cin >> answer;

		system("CLS");

		do {
			cout << "this generation: " << endl;
			cout << endl;

			int array[row][col];

			for (int r = 0; r < row; r++) //this is an example
			{
				for (int c = 0; c < col; c++)
				{
					array[r][c] = rand() % 2; //this has to change because it wont be random
				}
			}

			for (int r = 0; r < row; r++) //output of the example
			{
				for (int c = 0; c < col; c++)
				{
					cout << setw(2) << array[r][c];
				}
				cout << endl;
			}

			cout << endl;
			cout << "next? (y)" << endl;
			cin >> answer;

		} while (answer == "y");
	}

	else {
		cout << "ok" << endl;
		cout << "shit";

	}
	return 0;
}

// input as coordinates
// there has to be a second array
// because if we only have one 
// we need to have a read and one to out from the read one
// ask if you want to continue onto the next day
//also make sure that there is always a cell alive at all times