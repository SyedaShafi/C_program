#include <stdio.h>
void ptr(int n)
{
    if (n == 0)
        return;
    ptr(n-1);
    printf("I love Recursion\n");
}
int main()
{
    int n;
    scanf("%d", &n);
    ptr(n);
    return 0;
}