// Remove characters except Alphabets
#include <stdio.h>
void removal(int i, char A[]);
int main()
{
    char A[100] = {"Good the morning"};
    removal(0, A);
    return 0;
}
void removal(int i, char A[])
{
    if (A[i] != '\0')
    {
        if ((A[i] >= 'A' && A[i] <= 'Z') || (A[i] >= 'a' && A[i] <= 'z'))
        {
            return removal(i + 1, A);
        }
        else
        {
            A[i] = A[i + 1];
            return removal(i + 1, A);
        }
        return removal(i + 1, A);
    }
    puts(A);
}