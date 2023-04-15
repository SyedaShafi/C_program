#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ele;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ele);
        if (ele < 0)
            printf("2 ");
        else if (ele > 0)
            printf("1 ");
        else
            printf("0 ");
    }
    return 0;
}