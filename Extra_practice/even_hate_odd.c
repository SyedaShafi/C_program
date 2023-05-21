#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int ele, even = 0, odd = 0;
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &ele);
            if (ele % 2 == 0)
                even++;
            else
                odd++;
        }
        if (n % 2 != 0)
            printf("-1\n");
        else if (even == odd)
            printf("0\n");
        else
        {
            int ans = 0;
            if (even > odd)
                ans = n / 2 - odd;
            else
                ans = n / 2 - even;
            printf("%d\n", ans);
        }
    }
    return 0;
}