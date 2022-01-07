// Finding Length of a String
#include <stdio.h>
void length(int i, char A[], int count);
int main()
{
    char A[100];
    printf("Enter something :\n");
    fgets(A, 100, stdin);
    length(0, A, 0);
    return 0;
}
void length(int i, char A[], int count)
{
    if (A[i] != '\0')
    {
        return length(i + 1, A, count + 1);
    }
    printf("%d\n", count);
}