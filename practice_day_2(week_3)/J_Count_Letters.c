#include <stdio.h>
#include <string.h>
int main()
{
    char str[10000004];
    gets(str);
    int len = strlen(str);
    int cnt[26] = {0};
    for (int i = 0; i < len; i++)
    {
        cnt[str[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (cnt[i] > 0)
            printf("%c : %d\n", (i + 'a'), cnt[i]);
    }
    return 0;
}