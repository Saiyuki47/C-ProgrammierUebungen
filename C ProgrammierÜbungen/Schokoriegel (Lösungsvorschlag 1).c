#include <stdio.h>

//int main()
//{
//    int a, b, n, erg;
//
//    printf("a, b, n eingeben: ");
//    scanf("%d %d %d", &a, &b, &n);
//
//    // Nutze Preprocessor Direktive fuer bedingte Compilierung:
//#if 1   // fuehre diesen Code aus bei "#if 1"
//    if (a + 5 * b < n)
//        erg = -1;
//    else {
//        if (a < n % 5)
//            erg = -1;
//        else {
//            if (b >= n / 5)
//                erg = n - 5 * (n / 5);
//            else
//                erg = n - 5 * b;
//        }
//    }
//#else   // oder fuehre diesen Code aus, falls oben "#if 0"
//    if (a < n - 5 * b || a < n % 5) {
//        erg = -1;
//    }
//    else {
//        erg = n - 5 * ((n <= 5 * b) ? n / 5 : b);
//    }
//#endif
//
//    printf("Ergebnis: %d\n", erg);
//}