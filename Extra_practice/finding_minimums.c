#include <stdio.h>
#include <limits.h>
int main()
{
    int n, k, mn;
    scanf("%d %d", &n, &k);
    int a[n];
    for (int i = -0; i < n; i++)
        scanf("%d", &a[i]);
    for (int i = 0; i < n; i += k)
    {
        mn = INT_MAX;
        if (n - i >= k)
        {
            for (int j = i; j < i + k; j++)
            {
                // printf("%d ", a[j]);
                if (a[j] < mn)
                    mn = a[j];
            }
            printf("%d ", mn);
        }
        // printf("\n");
    }
    if (n % k != 0)
    {

        mn = INT_MAX;
        int rem = n % k;
        int temp = 0, j = n - 1;
        while (temp != rem)
        {
            if (a[j] < mn)
                mn = a[j];
            j--;
            temp++;
        }
        printf("%d\n", mn);
    }
    return 0;
}