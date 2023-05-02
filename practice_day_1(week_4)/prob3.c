#include <stdio.h>
int char_to_ascii(char x)
{
    return x;
}
int main()
{
    char x;
    scanf("%c", &x);
    printf("%d", char_to_ascii(x));
    return 0;
}