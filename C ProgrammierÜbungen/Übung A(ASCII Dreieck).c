#include <stdio.h>

void muster(int anz_zeilen)
{
	if (!anz_zeilen < 1)
	{
		int countRow = 1;
		int biggestRow = (anz_zeilen * 2) - 1;
		int anzahlAbstand = anz_zeilen-1;
		for (int i = 1; i <= anz_zeilen; i++)
		{
			for (int j = 0; j < anzahlAbstand; j++)
			{
				printf(" ");
			}
			anzahlAbstand -= 1;
			for(int x =0;x<countRow;x++)
			{
				printf("*");
			}
			countRow += 2;
			printf("\n");
		}
	}
}

//int main()
//{
//	muster(15);
//}