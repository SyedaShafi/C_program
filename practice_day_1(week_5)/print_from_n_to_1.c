#include <stdio.h>
void fun(int n)
{
    if (n == 1)
        return;
    printf("%d ", n);
    fun(n - 1);
}
int main()
{
    int n;
    scanf("%d", &n);
    fun(n);
    printf("%d", 1);
    return 0;
}