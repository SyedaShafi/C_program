#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a = 0, b = n - 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a == b && j == a)
                printf("X");

            else if (j == a)
                printf("\\");
            else if (j == b)
                printf("/");
            else
                printf("*");
        }
        if (a == b && i > (n / 2))
        {
            a--, b++;
        }
        else
        {
            a++, b--;
        }
        printf("\n");
    }
    return 0;
}