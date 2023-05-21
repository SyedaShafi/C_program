#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int s = n / 2, h = 1;
    for (int i = 0; i < n; i++)
    {
        if (i == n / 2)
        {
            h = n;
            s = 0;
        }
        for (int j = 0; j < s; j++)
            printf("*");
        for (int j = 0; j < h; j++)
            printf("#");
        for (int j = 0; j < s; j++)
            printf("*");
        h = 1;
        s = n / 2;

        printf("\n");
    }
    return 0;
}