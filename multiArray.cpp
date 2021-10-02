#include <iostream>
#include <iomanip>

using namespace std;

const int row = 500;
const int col = 100;

int main()
{
    srand(time(NULL));

    int array [row] [col];

    for (int r = 0; r < row; r++) //first one corresponds to the row, the second is probably 
    {
        for (int c = 0; c < col; c++)
        {
            array[r][c] = rand() % 100;
        }
    }

    for (int r = 0; r < row; r++) //first one corresponds to the row, the second is probably 
    {
        for (int c = 0; c < col; c++)
        {
            cout << setw(3) << array[r][c];
        }
        cout << endl;
    }
    return 0;

}

/*
notes on friday class

2D arrays 
funtions:
- similar to 1d arrays
    -automatically passed by reference
    -when calling a function that passes an array, you just need to use the name of the array (array [])
    in the prototype size is not specified in the square bracket [] *

-in 2D arrays, in the function prototype you dont indicate a size in the FIRST [], 
 but you indicate it in the size fo the second []

when searching through the 2D array make sure it doesnt go out of the array 
because it will start outputting random values
even when they dont exist

*/