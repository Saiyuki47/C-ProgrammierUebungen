#include <stdio.h>

void minMaxZahlAusArray(int *arr, int len);


int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8 };

	minMaxZahlAusArray(arr,8);
	return 0;
}

void minMaxZahlAusArray(int *arr, int len)
{
	int min = arr[0];
	int max = arr[0];
	//size_t length = sizeof(xyz) / sizeof(xyz[0]);
	//size_t arrLength = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < len; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	printf("Kleinste: %d\nGroesste: %d", min, max);
}
