#include <stdio.h>
#include <string.h>
int main()
{
    char s[1000 + 3], t[1000 + 3];
    gets(s);
    gets(t);
    printf("%d %d\n", strlen(s), strlen(t));
    printf("%s %s\n", s, t);
    return 0;
}