#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int k = 2 * n - 1, s = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < s; j++)
            printf(" ");
        for (int j = 0; j < k; j++)
            printf("*");
        printf("\n");
        s++;
        k-=2;
    }
    return 0;
}