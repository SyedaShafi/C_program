#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ele;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ele);
        if (ele <= 10)
        {
            printf("A[%d] = %d\n", i, ele);
        }
    }
    return 0;
}