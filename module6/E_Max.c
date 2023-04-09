#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ele, mx = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ele);
        if (ele > mx)
            mx = ele;
    }
    printf("%d\n", mx);
    return 0;
}