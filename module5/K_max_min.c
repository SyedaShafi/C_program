#include <stdio.h>
int main()
{
    int a[3];
    for (int i = 0; i < 3; i++)
        scanf("%d", &a[i]);
    for (int i = 0; i < 3; i++)
    {
        for (int j = i + 1; j < 3; j++)
        {
            if (a[i] > a[j])
            {
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
    printf("%d %d", a[0], a[2]);

    return 0;
}