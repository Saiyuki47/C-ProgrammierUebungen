#include <stdio.h>

//int main()
//{
//    int ggT(int a, int b);
//    int kgV(int a, int b);
//    printf("%d", kgV(24, 30));
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

//kgV(17262,8580)=17262⋅8580÷ggT(17626,8580)=24684660.
int kgV(int a, int b)
{
    return a * b / ggT(a, b);
}