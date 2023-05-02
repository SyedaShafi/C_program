#include <stdio.h>
char small_to_capital(char ch)
{
    return ch - 32;
}
int main()
{
    char ch;
    scanf("%c", &ch);
    char res = small_to_capital(ch);
    printf("%c", res);
    return 0;
}