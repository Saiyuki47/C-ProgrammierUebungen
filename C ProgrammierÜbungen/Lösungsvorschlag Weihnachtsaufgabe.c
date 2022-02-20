
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 60

void showWorldAndCopy(short prev[], short curr[]) {
    for (int i = 0; i < N; i++) {
        printf("%c", curr[i] ? 'X' : '_');
        prev[i] = curr[i];
    }
    printf("\n");
}

//int main(void) {
//    short prev[N], curr[N];
//    int i, j, cnt, steps;
//
//    srand((unsigned)time(NULL));
//
//    for (i = 0; i < N; i++)
//        curr[i] = rand() % 2;
//
//    printf("Bitte Anzahl Simulationsschritte angeben: ");
//    scanf("%d", &steps);
//
//    showWorldAndCopy(prev, curr);
//
//    while (steps--) {
//        for (i = 0; i < N; i++) {
//            for (cnt = 0, j = -2; j <= 2; j++)
//                cnt += prev[(i + j + N) % N];
//
//            curr[i] = (int)(cnt == 2 || cnt == 4);
//        }
//
//        showWorldAndCopy(prev, curr);
//    }
//}