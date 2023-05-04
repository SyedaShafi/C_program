#include <stdio.h>
int main()
{
    int a[4];
    int a1, b, c;
    scanf("%d %d %d", &a1, &b, &c);
    a[0] = a1, a[1] = b, a[2] = c;
    for (int i = 0; i < 2; i++)
    {
        for (int j = i + 1; j < 3; j++)
            if (a[i] > a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
    }

    for (int i = 0; i < 3; i++)
        printf("%d\n", a[i]);
    printf("\n%d\n%d\n%d", a1, b, c);
    return 0;
}