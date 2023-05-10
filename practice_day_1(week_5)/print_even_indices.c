#include <stdio.h>
void fun(int a[], int sz, int i)
{
    if (i >= sz)
        return;
    fun(a, sz, i + 2);
    printf("%d ", a[i]);
}
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    fun(a, n, 0);
    return 0;
}