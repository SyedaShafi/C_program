#include <stdio.h>
int add(int a, int b)
{
    return (a + b);
}
int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    int res = add(x, y);
    printf("%d", res);
    return 0;
}