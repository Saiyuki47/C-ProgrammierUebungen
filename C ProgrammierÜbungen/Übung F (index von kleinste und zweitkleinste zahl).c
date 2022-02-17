#include <stdio.h>

int kleinstes(int arr[], int n);
int zweitkleinstes(int arr[], int n);

//int main()
//{
//	int arr[] = { 2,34,5,6,1,864,534 };
//	//printf("%d", kleinstes(arr,8));
//	printf("%d", zweitkleinstes(arr,7));
//}

int kleinstes(int arr[], int n)
{
	int kleinste = arr[0];
	int kleinsteIndex = 0;

	for (int i = 0; i < n; i++)
	{
		if (arr[i] <= kleinste)
		{
			kleinste = arr[i];
			kleinsteIndex = i;
		}
	}
	return kleinsteIndex;
}

int zweitkleinstes(int arr[], int n)
{
	int kleinste = arr[0];
	int zweitkleinste = arr[0];
	int zweitkleinsteIndex = 0;
	int kleinsteIndex = 0;

	for (int i = 0; i < n; i++)
	{
		if (arr[i] <= kleinste)
		{
			zweitkleinste = kleinste;
			kleinste = arr[i];
			zweitkleinsteIndex = kleinsteIndex;
			kleinsteIndex = i;
		}
	}
	return zweitkleinsteIndex;
}