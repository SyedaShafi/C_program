#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ele;
    long long int even_sum = 0, odd_sum = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ele);
        if (ele % 2 == 0)
            even_sum += ele;
        else
            odd_sum += ele;
    }
    printf("%lld %lld", even_sum, odd_sum);
    return 0;
}