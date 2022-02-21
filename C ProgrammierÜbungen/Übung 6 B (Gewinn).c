#include <stdio.h>

int main()
{
	int gewinn(int a, int b, int c);
	printf("Alle Gleich  %d\n", gewinn(1, 1, 1));
	printf("Zwei Gleich  %d\n", gewinn(1, 1, 4));
	printf("Keine Gleich %d\n", gewinn(1, 2, 3));


}
int gewinn(int a, int b, int c)
{
	if (a == b == c)
		return 20;
	else if (a == b || a == c || b == c)
		return 10;
	else
		return 0;
}