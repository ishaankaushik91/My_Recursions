// Counting words
#include <stdio.h>
void words(int index, char A[], int count);
int main()
{
    char A[100];
    printf("Enter something :\n");
    fgets(A, 100, stdin);
    words(0, A, 1);
    return 0;
}
void words(int index, char A[], int count)
{
    if (A[index] != '\0')
    {
        if (A[index] == 32)
        {
            return words(index + 1, A, count + 1);
        }
        return words(index + 1, A, count);
    }
    printf("%d\n", count);
}