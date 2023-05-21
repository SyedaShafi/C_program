#include <stdio.h>
void fun(int *a, int sz, int idx)
{
    if (idx == sz)
        return;
    printf("%d ", a[idx]);
    fun(a, sz, idx + 1);
}
int main()
{
    int a[] = {1, 3, 4, 5, 6, 7, 8, 9, 0};
    int sz = sizeof(a) / sizeof(int);
    fun(a, sz, 0);
    return 0;
}