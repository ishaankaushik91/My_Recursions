// Asking for numbers until -1 is encountered & counting total numbers
#include <stdio.h>
void Asking(int i, int count); // asking for Input
int main()
{
    Asking(0, 0);
    return 0;
}
void Asking(int i, int count)
{
    if (i != -1)
    {
        printf("Enter a number :\n");
        scanf("%d", &i);
        return Asking(i, count + 1);
    }
    printf("%d\n", count - 1); // -1 coz it'll consider -1 too in our input
}