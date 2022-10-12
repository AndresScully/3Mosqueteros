#include <stdio.h>

void clear_keyboard_buffer(void);
char initial_play(char);
char play(char);

int main(int argc, char* argv[])
{
	int turn = 1;
	char c1 = 'o';
	
	while (turn <= 1)
	{
		printf("Player %d it is your turn!\n", turn);
		initial_play(c1);
		turn++;
	}
	do {
		printf("Player %d it is your turn!\n", turn);
		play(&c1);
		turn++;
	} while (turn <= 2);
}
char initial_play(c1)
{
	printf("Please choose (R)ock, (P)aper, or (S)issors: ");
	scanf(" %c", &c1);
	if (c1 != 'R' && c1 != 'r' && c1 != 'P' && c1 != 'p' && c1 != 'S' && c1 != 's')
	{
		printf("I'm sorry I do not undertand\n");
		clear_keyboard_buffer();
		initial_play(c1);
	}
	return c1;
}
char play(c1)
{
	char c2;
	printf("Please choose (R)ock, (P)aper, or (S)issors: ");
	scanf(" %c", &c2);

	if (c2 != 'R' && c2 != 'r' && c2 != 'P' && c2 != 'p' && c2 != 'S' && c2 != 's')
	{
		printf("I'm sorry I do not undertand\n");
		clear_keyboard_buffer();
		play(c1);
	}
	switch (c2)
	{
	case 'R':
	case 'r':
		if (c1 == 'R' || c1 == 'r')
			printf("tie\n");
		else if (c1 == 'P' || c1 == 'p')
			printf("player 1 wins\n");
		else if (c1 == 'S' || c1 == 's')
			printf("player 2 wins\n");
		break;
	case 'P':
	case 'p':
		if (c1 == 'R' || c1 == 'r')
			printf("player 2 wins\n");
		else if (c1 == 'P' || c1 == 'p')
			printf("tie\n");
		else if (c1 == 'S' || c1 == 's')
			printf("player 1 wins\n");
		break;
	case 'S':
	case 's':
		if (c1 == 'R' || c1 == 'r')
			printf("player 1 wins\n");
		else if (c1 == 'P' || c1 == 'p')
			printf("player 2 wins\n");
		else if (c1 == 'S' || c1 == 's')
			printf("tie\n");
		break;
	}
	return;
}
void clear_keyboard_buffer(void)
{
	char c;
	scanf("%c", &c);
	while (c != '\n')
	{
		scanf("%c", &c);
	}
}