#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    long long int a[n];
    int mx = 0;
    for (int i = 0; i < n; i++)
    {
        int cnt = 0;
        scanf("%lld", &a[i]);
        while (a[i] % 2 == 0)
        {
            cnt++;
            a[i] /= 2;
        }
        if (cnt > mx)
            mx = cnt;
    }
    printf("%d\n", mx);
    return 0;
}