#include <stdio.h>
int count_before_zero(int *a, int n)
{
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != 0)
            cnt++;
        else
            break;
    }
    return cnt;
}
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    int cnt = count_before_zero(a, n);
    printf("%d", cnt);
    return 0;
}