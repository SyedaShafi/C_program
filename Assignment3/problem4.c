// 2. has return + no parameter:
// #include <stdio.h>
// int get_input()
// {
//     int n;
//     printf("Please enter an integer : ");
//     scanf("%d", &n);
//     return n;
// }
// int main()
// {
//     int a = get_input();
//     printf("\nThe user input is : %d", a);
//     return 0;
// }

// 3. No Return + Parameter
// void even_or_odd(int a)
// {
//     if (a % 2 != 0)
//         printf("The number %d is odd\n", a);
//     else
//         printf("This number %d is even\n", a);
// }
// #include <stdio.h>
// int main()
// {
//     int a;
//     scanf("%d", &a);
//     even_or_odd(a);
//     return 0;
// }

// 4. no return + no parameter:
void add()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("The sum is %d", (a + b));
}
#include <stdio.h>
int main()
{
    add();
    return 0;
}