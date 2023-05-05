#include <stdio.h>
int is_palindrome(char *str)
{
    int len = strlen(str);
    int i = 0, j = len - 1, flag = 1;
    while (i < j)
    {
        if (str[i] == str[j])
        {
            i++, j--;
        }
        else
        {
            flag = 0;
            break;
        }
    }
    return flag;
}
int main()
{
    char str[11];
    scanf("%s", str);
    int present = is_palindrome(str);
    if (present)
        printf("Palindrome\n");
    else
        printf("Not Palindrome");
    return 0;
}