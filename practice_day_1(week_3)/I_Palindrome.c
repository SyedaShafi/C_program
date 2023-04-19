#include <stdio.h>
#include <string.h>
int main()
{
    char s[1003];
    scanf("%s", s);
    int i = 0, j = strlen(s) - 1, flag = 1;
    while (i < j)
    {
        if (s[i] != s[j])
        {
            flag = 0;
            break;
        }
        else
        {
            i++, j--;
        }
    }
    if (flag == 1)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}