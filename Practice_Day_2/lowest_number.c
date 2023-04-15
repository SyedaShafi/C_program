#include <stdio.h>
int main()
{
    int n, ele;
    scanf("%d", &n);
    int mn = __INT_MAX__, index = -1;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ele);
        if (ele < mn)
        {
            mn = ele;
            index = i + 1;
        }
    }
    printf("%d %d", mn, index);

    return 0;
}