#include <iostream>
#include <stdlib.h> 
using namespace std;

int main()
{
    int tokens = 100; 
    int slot1, slot2, slot3; 
    string answer;

    while (answer != "N" && answer != "n" && tokens != 0)] 
    {
        cout << "You have " << tokens << " tokens. Pull? (y/n) "; 
        cin >> answer;
        
        cout << " " << endl;

        if (answer == "Y" || answer == "y")
        {
            --tokens; 
            slot1 = rand() % 3 + 1; 
            slot2 = rand() % 3 + 1; 
            slot3 = rand() % 3 + 1;

            cout << "[" << slot1 << "][" << slot2 << "][" << slot3 << "]" << endl; 

            if (slot1 == slot2 && slot2 == slot3) {
                tokens += slot1 * 4;
                cout << " " << endl;
                cout << "You won " << slot1 * 4 << " tokens!" << endl; 
                cout << " " << endl;

            }
                
            else {
                cout << " " << endl;
                cout << "You lost" << endl;
                cout << " " << endl;
            }

            system("PAUSE"); 
            system("CLS");
        }
    }

    cout << "Thanks for playing!" << endl;

    return 0;
}