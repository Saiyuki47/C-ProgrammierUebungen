#include <stdio.h>
#include <stdbool.h>

bool unlucky1(int arr[], int n);
//int main()
//{
//	int arr[] = { 1,1,2,3 };
//	bool test = unlucky1(arr,3);
//	return 0;
//}

bool unlucky1(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == 1 && arr[i + 1] == 3)
		{
			return true;
		}
	}
	return false;
}

