#include <stdio.h>
int main()
{
    long long int n, m, k, ans;
    scanf("%lld %lld %lld", &n, &m, &k);
    long long int mn;
    if (n <= m && n <= k)
        mn = n;
    else if (m <= n && m <= k)
        mn = m;
    else if (k <= n && k <= m)
        mn = k;
    ans = mn;
    n -= mn;
    m -= mn;
    k -= mn;

    if (n > 0)
    {
        n = n / 2;

        if (n <= k)
            ans += n;
        else if (k < n)
            ans += k;
    }
    printf("%lld\n", ans);
    return 0;
}