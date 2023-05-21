#include <stdio.h>
#include <limits.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    int mn = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if (a[i] < mn)
            mn = a[i];
    }
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (mn == a[i])
            cnt++;
    }
    if (cnt % 2 == 0)
        printf("Unlucky\n");
    else
        printf("Lucky\n");
    return 0;
}