#include <stdio.h>

//int main()
//{
//    int ggT(int a, int b);
//    printf("%d", ggT(44,12));
//}


int ggT(int a, int b)
{
    if (a == 0)
    {
        return b;
    }
    while (b != 0)
    {
        int h = a % b;
        a = b;
        b = h;
    }
    return a;
}