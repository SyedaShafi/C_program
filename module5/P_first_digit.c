#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int rem = 0;
    while (n != 0)
    {
        rem = n % 10;
        n /= 10;
    }
    if (rem % 2 == 0)
        printf("EVEN\n");
    else
        printf("ODD\n");
    return 0;
}