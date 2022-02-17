#include <stdio.h>

int countOdds(int f[], int n);

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,78,9,2,3 };
//	printf("%d",countOdds(arr, 10));
//}

int countOdds(int f[], int n)
{
	int count = 0;
	for (int i = 0; i < n;i++)
	{
		if (f[i] % 2 == 0)
		{
			count += 1;
		}
	}
	return count;
}