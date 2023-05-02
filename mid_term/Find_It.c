#include <stdio.h>
int main()
{
    int n, a[1003], k;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    scanf("%d", &k);
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == k)
            cnt++;
    }
    printf("%d\n", cnt);
    return 0;
}