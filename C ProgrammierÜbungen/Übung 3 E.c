// Übung 3e.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#include <stdbool.h>

//int main()
//{
//    int choice = 0;
//    printf("Sag mir welche option du begehrst\n"
//        "1.Die Summe aller durch 3 teilbaren Zahlen zwischen 1 und 1000\n"
//        "2.Gib mir eine Zahl und ich sag dir ob eine 7 da drin steckt \n"
//        "3.Gib mir eine Zahl und ich sag dir wie oft sich eine 7 darin befindet\n"
//    );
//    scanf_s("%d", &choice);
//
//    
//
//    if (choice > 3 || choice < 1)
//    {
//        printf("Fehler! Du darfst nur die Zahlen von 1 bis 3 angeben\n");
//        return 0;
//    }
//    int zahl = 0;
//    int sevenCount = 0;
//    switch (choice)
//    {
//        case 1:
//            for (int i = 0; i <= 1000; i++)
//            {
//                if (i >= 3 && i % 3 == 0)
//                {
//                    zahl += i;
//                }
//            }
//            printf("%d", zahl);
//            break;
//        case 2:
//            printf("Gib mir jetzt eine Zahl:");
//            scanf_s("%d", &zahl);
//
//            while (true)
//            {
//                if (zahl % 10 == 7)
//                {
//                    printf("true");
//                    return 0;
//                }
//                else if (zahl == 0)
//                {
//                    printf("false");
//                }
//
//                zahl /= 10;
//            }
//            break;
//        case 3:
//            printf("Gib mir jetzt eine Zahl:");
//            scanf_s("%d", &zahl);
//
//            while (true)
//            {
//                if (zahl % 10 == 7)
//                {
//                    sevenCount += 1;
//                }
//                zahl /= 10;
//                if (zahl == 0)
//                    break;
//            }
//            printf("%d", sevenCount);
//            break;
//
//    }
//    return 0;
//}

