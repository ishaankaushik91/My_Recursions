// Sum of all elements in an Array
#include <stdio.h>
int Traversal(int i, int A[]);// Asking for Input
int main()
{
    int A[100];
    printf("%d\n", Traversal(0, A));
    
    return 0;
}
int Traversal(int i, int A[])
{
    if (i < 10)
    {
        printf("Enter element at %d :\n", i);
        scanf("%d", &A[i]);
        return A[i] + Traversal(i + 1, A);
    }
    return 0;
}