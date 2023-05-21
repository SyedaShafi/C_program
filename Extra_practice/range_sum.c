#include <stdio.h>
#include <math.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        long long int x, y;
        scanf("%lld %lld", &x, &y);
        if (x < y)
            x--;
        else
            y--;

        long long int a = x, b = x + 1;
        if (x % 2 == 0)
            a = x / 2;
        else
            b = (x + 1) / 2;

        long long int t1 = a * b, t2;

        a = y, b = y + 1;

        if (y % 2 == 0)
            a = y / 2;
        else
            b = (y + 1) / 2;
        t2 = a * b;
        long long int sum;
        if (t2 > t1)
            sum = t2 - t1;
        else
            sum = t1 - t2;
        printf("%lld\n", sum);
    }
    return 0;
}