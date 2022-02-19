#include <stdio.h>

void reverse(int arr[], int n);

//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,9};
//	reverse(arr, 8);
//}

void reverse(int arr[], int n)
{
    for (int low = 0, high = n - 1; low < high; low++, high--)
    {
        int temp = arr[low];
        arr[low] = arr[high];
        arr[high] = temp;
    }
}
