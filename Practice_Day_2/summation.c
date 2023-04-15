#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ele;
    long long int sum = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ele);
        sum += ele;
    }
    if (sum >= 0)
        printf("%lld", sum);
    else
        printf("%lld", (sum * -1));
    return 0;
}