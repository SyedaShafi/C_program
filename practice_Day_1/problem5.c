#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    if (a >= 10000)
    {
        printf("Gucci bag\n");
        if (a > 20000)
        {
            printf("Gucci belt\n");
        }
    }
    else if (a >= 5000)
        printf("Levis bag\n");
    else
        printf("Something\n");
}