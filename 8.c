// Largest element in Array
#include <stdio.h>
int Traversal(int i, int A[]);// Asking for Input
int Largest(int largest, int i, int A[]);// Largest
int main()
{
    int A[100];
    Traversal(0, A);
    Largest(-1, 0, A);
    return 0;
}
int Traversal(int i, int A[])
{
    if (i < 10)
    {
        printf("Enter element at %d :\n", i);
        scanf("%d", &A[i]);
        return Traversal(i + 1, A);
    }
    return 0;
}
int Largest(int largest, int i, int A[])
{
    if (i < 10)
    {
        if (largest < A[i])
        {
            largest = A[i];
        }
        return Largest(largest, i + 1, A);
    }
    printf("%d\n", largest);
    return 0;
}