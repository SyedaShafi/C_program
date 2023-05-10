#include <stdio.h>
void fun(int n)
{
    if (n == 0)
        return;
    fun(n / 10);
    printf("%d ", n % 10);
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        if (n == 0)
        {
            printf("%d\n", 0);
            continue;
        }
        fun(n);
        printf("\n");
    }
    return 0;
}