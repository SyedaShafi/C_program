#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            int t = i - 1, j = 0;
            while (j < t)
            {
                int temp = a[j];
                a[j] = a[t];
                a[t] = temp;
                j++, t--;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}