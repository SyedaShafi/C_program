#include <stdio.h>
int main()
{
    float dis, x, p;
    scanf("%f %f", &x, &p);
    dis = (100 * p) / (100 - x);
    printf("%0.2f\n", dis);
    return 0;
}