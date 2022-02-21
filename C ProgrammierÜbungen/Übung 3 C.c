// Übung 3C.c

#include <stdio.h>

//int main()
//{
//    int choice = 0;
//    printf("Sag mir welche option du begehrst\n"
//        "1.Alle Zahlen von 100 bis 200\n"
//        "2.Nur alle geraden Zahlen zwischen 111 und 222 \n" 
//        "3.Alle durch 3 teilbare Zahlen zwischen 333 und 222 absteigend\n"
//    );
//    scanf_s("%d", &choice);
//
//    if (choice > 3 || choice < 1)
//    {
//        printf("Fehler! Du darfst nur die Zahlen von 1 bis 3 angeben\n");
//        return 0;
//    }
//    switch (choice) 
//    {
//        case 1:
//            for (int i = 100; i <= 200; i++)
//            {
//                printf("%d\n", i);
//            }
//            break;
//        case 2:
//            for (int i = 111; i <= 222; i++)
//            {
//                if (i % 2 == 0)
//                {
//                    printf("%d\n", i);
//                }
//            }
//            break;
//        case 3:
//            for (int i = 333; i >= 222; i--) 
//            {
//                if (i % 3 == 0)
//                {
//                    printf("%d\n", i);
//                }
//                
//            }
//            break;
//    }
//    return 0;
//}
