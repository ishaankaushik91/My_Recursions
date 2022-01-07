// Reverse a string
#include <stdio.h>
#include <string.h>
void rev(int i, char A[], int len); 
int main()
{
    char A[100];
    printf("Enter something :\n");
    fgets(A, 100, stdin);
    rev(0, A, strlen(A) - 1);
    return 0;
}
void rev(int i, char A[], int len)
{
    char temp;
    if (i < len)
    {
        temp = A[i];
        A[i] = A[len];
        A[len] = temp;
        return rev(i + 1, A, len - 1);
    }
    puts(A);
}