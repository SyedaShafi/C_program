#include <stdio.h>
void pyramid(int n, int s, int k)
{
    if (n == 0)
        return;
    pyramid(--n, --s, k += 2);
    for (int j = 0; j < s; j++)
        printf(" ");
    for (int j = 0; j < k; j++)
        printf("*");
    printf("\n");
}
int main()
{
    int n;
    scanf("%d", &n);
    pyramid(n, n, -1);
    return 0;
}