#include <stdio.h>
#include <string.h>
int main()
{
    char a[11], b[11];
    char ans[22];
    gets(a);
    gets(b);
    printf("%d %d\n", strlen(a), strlen(b));
    for (int i = 0; i < strlen(a); i++)
    {
        ans[i] = a[i];
    }
    int len = strlen(a);
    for (int i = 0; i < strlen(b); i++)
    {
        ans[i + len] = b[i];
    }
    for (int i = 0; i < len + strlen(b); i++)
        printf("%c", ans[i]);
    printf("\n");
    char temp = a[0];
    a[0] = b[0];
    b[0] = temp;
    printf("%s %s\n", a, b);
    return 0;
}