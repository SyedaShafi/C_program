#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int s = n - 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < s; j++)
            printf(" ");
        for (int j = 0; j < i + 1; j++)
            printf("*");
        printf("\n");
        s--;
    }
    return 0;
}