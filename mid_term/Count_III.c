#include <stdio.h>
int main()
{
    char s[1003];
    scanf("%s", s);
    int cnt[26] = {0};
    for (int i = 0; s[i] != '\0'; i++)
    {
        cnt[s[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        printf("%c - %d\n", i + 'a', cnt[i]);
    }
    return 0;
}