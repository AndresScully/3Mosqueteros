#include <iostream>
#include <iomanip>

#define H 20 //Define height
#define W 20 //Define width

using namespace std;

void clear(bool mat[][W]);
void print(bool mat[][W]);
void print2(unsigned int mat[][W]);
void calculate(bool mata[][W], bool matb[][W]);
void swap(bool mata[][W], bool matb[][W]);

int main()
{
    bool now[H][W], next[H][W]; //Creates now and then matrixes
    int x, y, cont; //Used for user input

    cout << left << "Welcome to Conway's Game of Life." << endl << endl;
    cout << "The Rules of Life:" << endl;
    cout << "1. Any live cell with fewer than two live neighbors dies, as if by loneliness." << endl;
    cout << "2. Any live cell with more than three live neighbors dies, as if by \novercrowding." << endl;
    cout << "3. Any live cell with two or three live neighbors lives, unchanged." << endl;
    cout << "4. Any dead cell with exactly three live neighbors comes to life." << endl << endl;
    cout << "To play: Press any key to begin. Enter the column and row of a cell to make \nalive, separated by a space. ";
    cout << "When you are ready, enter \"-1\" to begin the \nsimulation. Then enter any number to continue or \"-1\" to quit." << endl;
    cin.get();

    clear(now);
    print(now);

    do //Get initial state
    {
        cin >> x;
        if (x == -1) break; //User is done inputting
        cin >> y;
        now[y - 1][x - 1] = 1; //Sets cell to alive
        print(now); //Updates screen
    } while (x != -1);

    do //Keep updating new generations
    {
        clear(next);
        calculate(now, next);
        swap(now, next);
        print(now);
        cin >> cont;
    } while (cont != -1);

    return 0;
}

void clear(bool mat[][W]) //Sets matrix to all dead
{
    for (int m = 0; m < H; m++)
    {
        for (int n = 0; n < W; n++)
            mat[m][n] = 0;
    }
}

void print(bool mat[][W]) //Prints matrix to screen
{
    cout << setw(3) << " ";
    for (int p = 0; 5 * p < W; p++) cout << setw(5) << 5 * p + 1;
    cout << endl;
    for (int m = 0; m < H; m++)
    {
        cout << setw(3) << m + 1;
        for (int n = 0; n < W; n++)
        {
            if (mat[m][n]) cout << "\xDB";
            else cout << /*"\xB1"*/"O";
        }
        cout << endl;
    }
}

void print2(unsigned int mat[][W]) //Prints matrix to screen
{
    for (int m = 0; m < H; m++)
    {
        for (int n = 0; n < W; n++)
            cout << mat[m][n] << " ";
        cout << endl;
    }
}

void calculate(bool mata[][W], bool matb[][W])
{
    unsigned int neighbors;
    for (int m = 0; m < H; m++)
    {
        for (int n = 0; n < W; n++)
        {
            neighbors = 0;
            //Begin counting number of neighbors:
            if (mata[m - 1][n - 1] == 1) neighbors += 1;
            if (mata[m - 1][n] == 1) neighbors += 1;
            if (mata[m - 1][n + 1] == 1) neighbors += 1;
            if (mata[m][n - 1] == 1) neighbors += 1;
            if (mata[m][n + 1] == 1) neighbors += 1;
            if (mata[m + 1][n - 1] == 1) neighbors += 1;
            if (mata[m + 1][n] == 1) neighbors += 1;
            if (mata[m + 1][n + 1] == 1) neighbors += 1;

            //Apply rules to the cell:
            if (mata[m][n] == 1 && neighbors < 2)
                matb[m][n] = 0;
            else if (mata[m][n] == 1 && neighbors > 3)
                matb[m][n] = 0;
            else if (mata[m][n] == 1 && (neighbors == 2 || neighbors == 3))
                matb[m][n] = 1;
            else if (mata[m][n] == 0 && neighbors == 3)
                matb[m][n] = 1;
        }
    }
}

void swap(bool mata[][W], bool matb[][W]) //Replaces first matrix with second
{
    for (int m = 0; m < H; m++)
    {
        for (int n = 0; n < W; n++)
            mata[m][n] = matb[m][n];
    }
}