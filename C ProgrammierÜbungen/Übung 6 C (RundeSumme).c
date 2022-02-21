#include <stdio.h>

int main()
{
	int rundeSumme(int a, int b, int c);
	int runde10(int n);
	printf("%d", rundeSumme(19,19,19));
}
int rundeSumme(int a, int b, int c)
{
	return runde10(a) + runde10(b) + runde10(c);
}
int runde10(int n)
{
	int zahl = n % 10;
	
	if (zahl > 5)
		return (n - zahl) + 10;
	else
		return n - zahl;
}