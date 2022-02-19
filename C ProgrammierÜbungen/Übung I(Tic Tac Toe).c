#include <stdio.h>
#include <stdbool.h>

#define fieldWidth 3
#define fieldHeigth 3
int TicTacField[fieldWidth][fieldHeigth];
int ChoicesList[] = { 1,2,3,4,5,6,7,8,9 };
#pragma	region declarations

void generateField();
void fillField();
void placeChoice(int choice, bool spieler1);
bool check4ValidChoice(int choice);
bool check4Win();

#pragma endregion

int main()
{
	bool spieler1 = true;
	int choice = 0;

	fillField();
	while(1)
	{
		if (check4Win())
		{
			if(!spieler1)
			{ 
				printf("Spieler1 hat gewonnen!");
				break;
			}
			else
			{
				printf("Spieler2 hat gewonnen!");
				break;
			}
		}

		generateField();

		if (spieler1)
		{
			printf("Spieler1 waehle deine Position :");
			scanf(" %d \n", &choice);
			if (check4ValidChoice(choice))
			{
				placeChoice(choice, spieler1);
				spieler1 = false;
			}
		}
		else
		{
			printf("Spieler2 waehle deine Position :");
			scanf(" %d \n", &choice);
			if (check4ValidChoice(choice))
			{
				placeChoice(choice, spieler1);
				spieler1 = true;
			}
		}
		system("@cls||clear");
	}
}

bool check4Win()
{
	//Oberste Reihe
	//XXX
	//OOO
	//OOO
	if (TicTacField[0][0] == 'X' && TicTacField[0][1] == 'X' && TicTacField[0][2] == 'X' || 
		TicTacField[0][0] == 'O' && TicTacField[0][1] == 'O' && TicTacField[0][2] == 'O')
	{
		return true;
	}
	//Mittlere Reihe
	//OOO
	//XXX
	//OOO
	if (TicTacField[1][0] == 'X' && TicTacField[1][1] == 'X' && TicTacField[1][2] == 'X' ||
		TicTacField[1][0] == 'O' && TicTacField[1][1] == 'O' && TicTacField[1][2] == 'O')
	{
		return true;
	}
	//Unterste Reihe
	//OOO
	//OOO
	//XXX
	if (TicTacField[2][0] == 'X' && TicTacField[2][1] == 'X' && TicTacField[2][2] == 'X' ||
		TicTacField[2][0] == 'O' && TicTacField[2][1] == 'O' && TicTacField[2][2] == 'O')
	{
		return true;
	}
	//Linke Reihe nach unten
	//XOO
	//XOO
	//XOO
	if (TicTacField[0][0] == 'X' && TicTacField[1][0] == 'X' && TicTacField[2][0] == 'X' ||
		TicTacField[0][0] == 'O' && TicTacField[1][0] == 'O' && TicTacField[2][0] == 'O')
	{
		return true;
	}
	//Mittlere Reihe nach unten
	//OXO
	//OXO
	//OXO
	if (TicTacField[1][1] == 'X' && TicTacField[2][1] == 'X' && TicTacField[0][1] == 'X' ||
		TicTacField[1][1] == 'O' && TicTacField[2][1] == 'O' && TicTacField[0][1] == 'O')
	{
		return true;
	}
	//Rechte Reihe nach unten
	//OOX
	//OOX
	//OOX
	if (TicTacField[1][2] == 'X' && TicTacField[2][2] == 'X' && TicTacField[0][2] == 'X' ||
		TicTacField[1][2] == 'O' && TicTacField[2][2] == 'O' && TicTacField[0][2] == 'O')
	{
		return true;
	}
	//Rechte Reihe nach unten
	//OOX
	//OXO
	//XOO
	if (TicTacField[0][2] == 'X' && TicTacField[1][1] == 'X' && TicTacField[2][0] == 'X' ||
		TicTacField[0][2] == 'O' && TicTacField[1][1] == 'O' && TicTacField[2][0] == 'O')
	{
		return true;
	}
	//Rechte Reihe nach unten
	//XOO
	//OXO
	//OOX
	if (TicTacField[1][1] == 'X' && TicTacField[2][2] == 'X' && TicTacField[0][0] == 'X' ||
		TicTacField[1][1] == 'O' && TicTacField[2][2] == 'O' && TicTacField[0][0] == 'O')
	{
		return true;
	}
	return false;
}

bool check4ValidChoice(int choice)
{
	for (int i = 0; i < 9; i++)
	{
		if (choice == ChoicesList[i])
		{
			ChoicesList[i] = 0;
			return true;
		}
	}
	return false;

}

void placeChoice(int choice, bool spieler1)
{
	switch (choice)
	{
		case 1:
			TicTacField[0][0] = spieler1 ? 'X' : 'O';
			break;
		case 2:
			TicTacField[0][1] = spieler1 ? 'X' : 'O';
			break;
		case 3:
			TicTacField[0][2] = spieler1 ? 'X' : 'O';
			break;
		case 4:
			TicTacField[1][0] = spieler1 ? 'X' : 'O';
			break;
		case 5:
			TicTacField[1][1] = spieler1 ? 'X' : 'O';
			break;
		case 6:
			TicTacField[1][2] = spieler1 ? 'X' : 'O';
			break;
		case 7:
			TicTacField[2][0] = spieler1 ? 'X' : 'O';
			break;
		case 8:
			TicTacField[2][1] = spieler1 ? 'X' : 'O';
			break;
		case 9:
			TicTacField[2][2] = spieler1 ? 'X' : 'O';
			break;
		default:
			printf("Digga mach nicht diesen!!!!");
			getch();
			break;

	}
}

void fillField()
{
	int count = 1;
	for (int i = 0; i < fieldWidth; i++)
	{
		for (int j = 0; j < fieldHeigth; j++,count++)
		{
			TicTacField[i][j] = '0'+count;
		}
	}
}

void generateField()
{
	for (int i = 0; i < fieldWidth; i++)
	{
		for (int j = 0; j < fieldHeigth; j++)
		{
				printf("%c", TicTacField[i][j]);
		}
		printf("\n");
	}
}