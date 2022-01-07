// Extract a substring from main string
#include <stdio.h>
#include <string.h>
void Sub(int i, int pos, char A[], char S[]);
int main()
{
    char A[100] = {"Good Morning"}, sub[100];
    Sub(0, 5, A, sub);
    return 0;
}
void Sub(int i, int pos, char A[], char S[])
{
    if (A[pos] != '\0')
    {
        S[i] = A[pos];
        return Sub(i + 1, pos + 1, A, S);
    }
    puts(S);
}