#include <stdio.h>
#include <stdbool.h>

bool firstLast8(int arr[], int n);

//int main()
//{
//	int arr[3] = { 1,2,3 };
//
//	bool answer = firstLast8(arr, 3);
//	
//	return 0;
//}

bool firstLast8(int arr[], int n)
{
	return (arr[0] == 8 || arr[n - 1] == 8);
}