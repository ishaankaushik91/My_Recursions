// Smallest element in Array
#include <stdio.h>
int Traversal(int i, int A[]);              // Asking for Input
int Smallest(int smallest, int i, int A[]); // Smallest number
int main()
{
    int A[100];
    Traversal(0, A);
    Smallest(1000, 0, A);
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
int Smallest(int smallest, int i, int A[])
{
    if (i < 10)
    {
        if (smallest > A[i])
        {
            smallest = A[i];
        }
        return Smallest(smallest, i + 1, A);
    }
    printf("%d\n", smallest);
    return 0;
}