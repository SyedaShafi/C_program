#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
        scanf("%d ", &a[i]);
    int mn = a[0], mx = a[0], mn_pos = 0, mx_pos = 0;
    for (int i = 1; i < n; i++)
    {
        if (a[i] > mx)
        {
            mx_pos = i;
            mx = a[i];
        }
        if (a[i] < mn)
        {
            mn = a[i];
            mn_pos = i;
        }
    }
    int temp = a[mx_pos];
    a[mx_pos] = a[mn_pos];
    a[mn_pos] = temp;
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    return 0;
}