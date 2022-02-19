#include <stdio.h>

void swap(int arr1[], int arr2[],int len);

//int main()
//{
//    int arr1[] = { 1,2,3,4,5 };
//    int arr2[] = { 5,4,3,2,1 };
//
//    swap(arr1,arr2,5);
//}

void swap(int arr1[], int arr2[], int len)
{
    int temp,x;

    for (x = 0; x < len; x++)
    {
        temp = arr1[x];
        arr1[x] = arr2[x];
        arr2[x] = temp;
    }
}