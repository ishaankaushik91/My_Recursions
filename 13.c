// Finding Floor Value in Array
#include <stdio.h>
int Traversal(int i, int A[]);         // Input
int Floor(int target, int i, int A[], int l); // Floor Value
int main()
{
    int A[100], target = 10, s = -1;
    Traversal(0, A);
    Floor(target, 0, A, -1);
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
int Floor(int target, int i, int A[], int l)
{
    if (i < 10)
    {
        if (target > A[i])
        {
            if (l < A[i])
            {
                l = A[i];
            }
        }
        return Floor(target, i + 1, A, l);
    }
    printf("%d\n", l);
    return 0;
}