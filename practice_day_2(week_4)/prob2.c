#include <stdio.h>
int cnt_len(char *str)
{
    int i = 0, cnt = 0;
    while (str[i] != '\0')
    {
        cnt++;
        i++;
    }
    return cnt;
}
int main()
{
    char str[10000];
    scanf("%s", str);
    int l = cnt_len(str);
    printf("%d", l);
    return 0;
}