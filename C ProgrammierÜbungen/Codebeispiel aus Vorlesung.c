#include <stdio.h>
#include <stdbool.h>

//int main()
//{
//    FILE* fp = NULL;
//
//    fp = fopen("file.txt", "r");
//    if (fp != NULL) {
//        while (!feof(fp)) {
//            char c;
//            if (fscanf(fp, "%c", &c) == 1) {
//                printf("%c", c);
//            }
//        }
//    }
//    else {
//        fprintf(stderr, "Datei nicht gefunden, Digga\n");
//    }
//    fprintf(stdout, "Moinsen\n");
//
//    fclose(fp);
//
//
//    fp = fopen("file.txt", "w");
//
//    if (fp != NULL) {
//        fprintf(fp, "%d %d\n", 23, 42);
//        fclose(fp);
//    }
//
//
//#if 0
//    fp = fopen("file.txt", "r");
//
//    if (fp != NULL) {
//        while (!feof(fp)) {
//            int a, b;
//            // Rueckgabe von scanf und fscanf:
//            // Anzahl korrekt eingelesener Variablen
//            int i = fscanf(fp, "%d %d", &a, &b);
//            if (i < 2)
//                break;
//            printf("%d %d\n", a, b);
//        }
//        fclose(fp);
//    }
//#endif
//}