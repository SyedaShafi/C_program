#include <stdio.h>
#include <string.h>
int main()
{
    char s[22], ss[22];
    scanf("%s %s", &s, &ss);
    int value = strcmp(s, ss);
    if (value < 0)
        printf("%s\n", s);
    else if (value > 0)
        printf("%s\n", ss);
    else
        printf("%s\n", s);
    return 0;
}