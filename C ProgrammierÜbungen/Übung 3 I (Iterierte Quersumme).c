// Übung 3i.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#include <stdbool.h>
int Quersumme(int zahl);


//int main()
//{
//    int zahl = 0;
//    int querSumme = 0;
//    printf("Gib Zahl und ich gebe dir die Quersumme : \n");
//
//    scanf_s("%d", &zahl);
//    
//    while (true)
//    {
//        int lol = 0;
//        int quer = Quersumme(zahl);
//        lol += quer;
//        if (lol / 10 == 0)
//        {
//            printf("%d", quer);
//            break;
//        }
//    }
//    return 0;
//}

int Quersumme(int zahl)
{
    int querSumme = 0;
    while (true)
    {
        querSumme += zahl % 10;

        zahl /= 10;
        if (zahl == 0)
            return querSumme;
    }
}