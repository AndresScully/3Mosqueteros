#include <iostream>

using namespace std;

void insertion(int a[]);
const int num = 5;

bool yahtzee(int dice[]); //funtion prototypes for each possible case
bool lS(int dice[]);
bool sS(int dice[]);
bool fullHouse(int dice[]);
bool fourK(int dice[]);
bool threeK(int dice[]);
int chance(int dice[]);

int points = 0; //keeps track of the points

int main()
{
	string answer; //important for the loop to restart

	int points = 0;
	int dice[num];
	char choice;

	cout << "play? (y)";
	cin >> choice;
	cout << endl;

	do
	{
		srand(time(NULL));

		cout << "You have rolled: ";
		for (int i = 0; i < num; i++)
		{
			dice[i] = rand() % 6 + 1;
			cout << dice[i] << " ";
		}
		cout << endl;
		cout << endl;
		insertion(dice);

		cout << "In order from smallest to greates: ";
		for (int i = 0; i < num; i++)
		{
			cout << dice[i] << " ";
		}

		cout << endl;
		cout << endl;

		if (yahtzee(dice) == true)
		{
			cout << "You have rolled a YAHTZEE!" << endl;
			cout << "50 Points!" << endl;
			points += 50;
			cout << "Total points: " << points;
			cout << endl;
		}

		else if (lS(dice) == true)
		{
			cout << "You have rolled a Large Straight!" << endl;
			cout << endl;
		}

		else if (sS(dice) == true)
		{
			cout << "You have rolled a Small Strait" << endl;
			cout << "30 Points!" << endl;
			points += 30;
			cout << "Total points: " << points;
			cout << endl;
		}

		else if (fullHouse(dice) == true)
		{
			cout << "You have rolled a Full House" << endl;
			cout << "25 Points!" << endl;
			points += 25;
			cout << "Total points: " << points;
			cout << endl;
		}

		else if (fourK(dice) == true)
		{
			cout << "You have rolled a Four of a Kind" << endl;
			cout << chance(dice) << " points!" << endl;
			cout << endl;
		}

		else if (threeK(dice) == true)
		{
			cout << "You have rolled a Three of a Kind" << endl;
			cout << chance(dice) << " points!" << endl;
			cout << endl;
		}

		else
		{
			cout << "You have rolled nothing" << endl;
			cout << "Chance for " << chance(dice) << " points" << endl;
		}

		cout << "again? (y/n)" << endl;
		cin >> choice;

	} while (choice == 'y');

	return 0;
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

//all of the funtions except for chance use a variation of the same code
//they loop around reading values and counting the values using some ints 
//the important variation is the if statement at the end
//this if statement will decide if the current stored value in the ints is what it chould be for the case
//then it will return true, thus making an if statement in main true and it ouputs the result of a roll

bool yahtzee(int dice[])
{
	int n1 = 0;
	int n2 = 0;
	int n3 = 0;
	int n4 = 0;
	int n5 = 0;
	int n6 = 0;

	for (int i = 0; i < num; i++)
	{
		if (dice[i] == 1)
		{
			n1++;
		}
		else if (dice[i] == 2)
		{
			n2++;
		}
		else if (dice[i] == 3)
		{
			n3++;
		}
		else if (dice[i] == 4)
		{
			n4++;
		}
		else if (dice[i] == 5)
		{
			n5++;
		}
		else if (dice[i] == 6)
		{
			n6++;
		}
	}

	if (n1 == 5 || n2 == 5 || n3 == 5 || n4 == 5 || n5 == 5 || n6 == 5)
		return true;
} 

bool lS(int dice[])
{
	int n1 = 0;
	int n2 = 0;
	int n3 = 0;
	int n4 = 0;
	int n5 = 0;
	int n6 = 0;

	for (int i = 0; i < num; i++)
	{
		if (dice[i] == 1)
		{
			n1++;
		}
		else if (dice[i] == 2)
		{
			n2++;
		}
		else if (dice[i] == 3)
		{
			n3++;
		}
		else if (dice[i] == 4)
		{
			n4++;
		}
		else if (dice[i] == 5)
		{
			n5++;
		}
		else if (dice[i] == 6)
		{
			n6++;
		}
	}

	if (n1 == 1 && n2 == 1 && n3 == 1 && n4 == 1 && n5 == 1)
		return true;
	else if (n2 == 1 && n3 == 1 && n4 == 1 && n5 == 1 && n6 == 1)
		return true;
}

bool sS(int dice[])
{
	int n1 = 0;
	int n2 = 0;
	int n3 = 0;
	int n4 = 0;
	int n5 = 0;
	int n6 = 0;

	for (int i = 0; i < num; i++)
	{
		if (dice[i] == 1)
		{
			n1++;
		}
		else if (dice[i] == 2)
		{
			n2++;
		}
		else if (dice[i] == 3)
		{
			n3++;
		}
		else if (dice[i] == 4)
		{
			n4++;
		}
		else if (dice[i] == 5)
		{
			n5++;
		}
		else if (dice[i] == 6)
		{
			n6++;
		}
	}

	if (n1 == 1 && n2 == 1 && n3 == 1 && n4 == 1)
		return true;
	else if (n2 == 1 && n3 == 1 && n4 == 1 && n5 == 1)
		return true;
	else if (n3 == 1 && n4 == 1 && n5 == 1 && n6 == 1)
		return true;
}

bool fullHouse(int dice[]) //still under wraps
{
	int n1 = 0;
	int n2 = 0;
	int n3 = 0;
	int n4 = 0;
	int n5 = 0;
	int n6 = 0;

	for (int i = 0; i < num; i++)
	{
		if (dice[i] == 1)
		{
			n1++;
		}
		else if (dice[i] == 2)
		{
			n2++;
		}
		else if (dice[i] == 3)
		{
			n3++;
		}
		else if (dice[i] == 4)
		{
			n4++;
		}
		else if (dice[i] == 5)
		{
			n5++;
		}
		else if (dice[i] == 6)
		{
			n6++;
		}
	}

	if (n1 == 3 || n2 == 3 || n3 == 3 || n4 == 3 || n5 == 3 || n6 == 3)
		if (n1 == 2 || n2 == 2 || n3 == 2 || n4 == 2 || n5 == 2 || n6 == 2)
		return true;
} 

bool fourK(int dice[]) //this section does a little bit of recycling, if the function determines that it is a four of a kind
{					   //then it will use points2 in order to give the points from the roll
	int n1 = 0;
	int n2 = 0;
	int n3 = 0;
	int n4 = 0;
	int n5 = 0;
	int n6 = 0;

	for (int i = 0; i < num; i++)
	{
		if (dice[i] == 1)
		{
			n1++;
		}
		else if (dice[i] == 2)
		{
			n2++;
		}
		else if (dice[i] == 3)
		{
			n3++;
		}
		else if (dice[i] == 4)
		{
			n4++;
		}
		else if (dice[i] == 5)
		{
			n5++;
		}
		else if (dice[i] == 6)
		{
			n6++;
		}
	}

	if (n1 == 4 || n2 == 4 || n3 == 4 || n4 == 4 || n5 == 4 || n6 == 4)
		return true;
}

bool threeK(int dice[]) //this section does a little bit of recycling, if the function determines that it is a three of a kind
{						//then it will use points2 in order to give the points from the roll
	int n1 = 0;
	int n2 = 0;
	int n3 = 0;
	int n4 = 0;
	int n5 = 0;
	int n6 = 0;

	for (int i = 0; i < num; i++)
	{
		if (dice[i] == 1)
		{
			n1++;
		}
		else if (dice[i] == 2)
		{
			n2++;
		}
		else if (dice[i] == 3)
		{
			n3++;
		}
		else if (dice[i] == 4)
		{
			n4++;
		}
		else if (dice[i] == 5)
		{
			n5++;
		}
		else if (dice[i] == 6)
		{
			n6++;
		}
	}

	if (n1 == 3 || n2 == 3 || n3 == 3 || n4 == 3 || n5 == 3 || n6 == 3)
		return true;
}

int chance(int dice[]) //set as the default for the if statement it will add up the values of the dice and output it as points 2
{
	int points2 = 0;
	for (int i = 0; i < num; i++)
	{
		points2 = points2 + dice[i];
	}
	return points2;
}