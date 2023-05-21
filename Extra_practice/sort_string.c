#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    char ch;
    int a[26] = {0};
    for (int i = 0; i <= n; i++)
    {
        scanf("%c", &ch);
        // printf("%c", ch);
        a[ch - 'a']++;
    }
    // for (int i = 0; i < 26; i++)
    // {
    //     printf("%d ", a[i]);
    // }
    for (int i = 0; i < 26; i++)
    {
        if (a[i] > 0)
            for (int j = 0; j < a[i]; j++)
            {
                printf("%c", ('a' + i));
            }
    }
    return 0;
}