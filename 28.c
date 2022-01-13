// merege 2 Arrays
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void Merge(int i, int A[], int B[]);
void Printer(int i, int A[]);
int main()
{
    time_t t;
    srand((unsigned)time(&t));
    // rand() % 100;
    int A[10], B[10];

    for (int i =  0; i < 10; i++)
    {
        A[i] = rand() % 100;
        B[i] = rand() % 10;
    }

    Merge(0, A, B);
    Printer(0, A);
    printf("\n");
    Printer(0, B);
    return 0;
}
void Merge(int i, int A[], int B[])
{
    int t;

    if (i < 10)
    {
        t = A[i];
        A[i] = B[i];
        B[i] = t;
        return Merge(i + 1, A, B);
    }
}
void Printer(int i, int A[])
{
    if (i < 10)
    {
        printf("%d\t", A[i]);
        return Printer(i + 1, A);
    }
}