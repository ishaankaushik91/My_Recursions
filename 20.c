// split string by space into words
#include <stdio.h>
void mars(int i, char A[]);
int main()
{
    char A[100];
    printf("Enter something :\n");
    fgets(A, 100, stdin);
    mars(0, A);
    return 0;
}
void mars(int i, char A[])
{
    if (A[i] != '\0')
    {
        if (A[i] == 32)
        {
            A[i] = '\n';
        }
        return mars(i + 1, A);
    }
    puts(A);
}