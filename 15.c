// Convert all lower to upper
#include <stdio.h>
void convert(int i, char A[]);
int main()
{
    char A[100];
    printf("Enter something :\n");
    fgets(A, 100, stdin);
    convert(0, A);
    return 0;
}
void convert(int i, char A[])
{
    if (A[i] != '\0')
    {
        if (A[i] >= 'a' && A[i] <= 'z')
        {
            A[i] = A[i] - 32;
        }
        return convert(i + 1, A);
    }
    puts(A);
}