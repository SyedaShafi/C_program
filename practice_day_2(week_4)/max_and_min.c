#include <stdio.h>
void min_max(int *a, int n)
{
    int mn = 100000 + 9, mx = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < mn)
            mn = a[i];
        if (a[i] > mx)
            mx = a[i];
    }
    printf("%d %d", mn, mx);
}
int main()
{
    int n;
    scanf("%d ", &n);
    int a[1004];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    min_max(a, n);
    return 0;
}