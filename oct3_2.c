#include <stdio.h>

enum suit {SPADES, CLUBS, DIAMONDS, HEARTS};
typedef enum suit Suit;

enum rank {ACE, TWO, THREE, FOUR, FIVE, SIX, SEVE, EIGHT, NINE, TEN, JACK, QUEEN, KING};
typedef enum rank Rank;

Suit get_suit(void);

void clear_keyboard_buffer(void);

//0,1,2.3

int main(int argc, char* argv[])
{	
	Suit card_suit = SPADES;
	Rank card_rank = ACE;

	card_suit = get_suit();
	
	switch (card_suit)
	{
	case HEARTS:
		printf("hearts\n");
		break;
	case CLUBS:
		printf("club\n");
		break;
	case DIAMONDS:
		printf("diamonds\n");
		break;
	case SPADES:
		printf("spaades\n");
		break;
	}
	return 0;
}

Suit get_suit(void)
{
	char c;
	printf("Please enter hearts, clubs, diamonds of spades: ");
	scanf(" %c", &c);
	clear_keyboard_buffer();
	while (c != 'c' && c != 'C' && c != 'h' && c != 'H' && c != 'd' && c != 'D' && c != 's' && c != 'S')
	{
		printf("om sorry but i do not understand\n");
		printf("please nter hearts, clubs, diamons, spades\n");
		clear_keyboard_buffer();
		scanf("%c", &c);
	}
	
	switch (c)
	{
	default:
		break;
	}

	return HEARTS;
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