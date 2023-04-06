#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    if (a <= 1000)
        printf("Bad luck!\n");
    else if (a > 1000)
    {
        printf("I will buy Punjabi\n");
        if (a - 1000 >= 500)
        {
            printf("I will buy new shoes\n");
            printf("Alisa will buy new shoes");
        }
    }
}