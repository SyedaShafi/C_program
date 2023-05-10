#include <stdio.h>
#include <string.h>
int cnt_vwl(char *s, int i)
{
    if (s[i] == '\0')
        return 0;
    if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o'|| s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
        return (1 + cnt_vwl(s, ++i));
    return cnt_vwl(s, ++i);
}
int main()
{
    char s[203];
    gets(s);
    // printf("%s", s);
    int cnt = cnt_vwl(s, 0);
    printf("%d", cnt);
    return 0;
} 