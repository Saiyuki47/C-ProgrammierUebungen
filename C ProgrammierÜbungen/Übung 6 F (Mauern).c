#include <stdio.h>
#include <stdbool.h>

//int main()
//{
//	bool mauern(int klein, int gross, int ziel);
//	printf("%d",mauern(3,1,8));
//	printf("%d",mauern(3,1,9));
//	printf("%d",mauern(3,2,10));
//}

//klein 1 gross
//gross 5 gross

bool mauern(int klein, int gross, int ziel)
{
	int zahl = ziel % 5;
	if (klein < zahl)
		return false;
	if (ziel / 5 > gross)
		return false;

	return true;
}
