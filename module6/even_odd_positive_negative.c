#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ele, even = 0, odd = 0, pos = 0, neg = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ele);
        if (ele % 2 == 0)
            even++;
        else if (ele % 2 != 0)
            odd++;
        if (ele > 0)
            pos++;
        if (ele < 0)
            neg++;
    }

    printf("Even: %d\n", even);
    printf("Odd: %d\n", odd);
    printf("Positive: %d\n", pos);
    printf("Negative: %d\n", neg);
    return 0;
}