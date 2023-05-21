#include <stdio.h>
#include <string.h>
int main()
{
    char s[1005];
    gets(s);
    int cap = 0, sml = 0, spc = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
            cap++;
        else if (s[i] >= 'a' && s[i] <= 'z')
            sml++;
        else if (s[i] == ' ')
            spc++;
    }
    printf("Capital - %d\nSmall - %d\nSpaces - %d\n", cap, sml, spc);
    return 0;
}