#include <stdio.h>
int main()
{
    char s[1000];
    scanf("%s", s);
    int sml = 0, cap = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
            sml++;
        else
            cap++;
    }
    printf("%d %d\n", cap, sml);
    return 0;
}