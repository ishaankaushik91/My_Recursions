// Extracting elements from middle of a String
#include <stdio.h>
#include <string.h>
void Sub(int i, char A[], int pos);
int main()
{
    char A[100];
    printf("Enter a sentence :\n");
    fgets(A, 100, stdin);
    Sub(0, A, 0);
    return 0;
}
void Sub(int i, char A[], int pos)
{
    if (A[i] != '\0')
    {
        if (i == pos)
        {
            printf("%c", A[i]);
            return Sub(i + 1, A, pos + 1);
        }
        return Sub(i + 1, A, pos);
    }   
}