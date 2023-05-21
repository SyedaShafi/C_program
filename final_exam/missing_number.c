#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
       double s, a, b, c, d;
        scanf("%lf %lf %lf %lf", &s, &a, &b, &c);
        d = a + b + c;
        printf("%0.0lf\n", (s - d));
    }
    return 0;
}