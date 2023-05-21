#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++)
    {
        int n;
        scanf("%d", &n);
        int a[n];
        for (int j = 0; j < n; j++)
            scanf("%d", &a[j]);
        int s;
        scanf("%d", &s);
        int flag = 0, index = -1;
        for (int j = 0; j < n; j++)
        {
            if (a[j] == s)
            {
                flag = 1;
                index = j;
                break;
            }
        }
        printf("Case %d: ", i);
        if (flag == 1)
            printf("%d\n", index + 1);
        else
            printf("Not Found\n");
    }
    return 0;
}