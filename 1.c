// Reverse Fibbonnaci
#include <stdio.h>
int Fibbonacci(int num);              // Getting Fibbonnaci
int Store(int i, int A[], int range); // Storing Fibbonnaci
int main()
{
    int A[100];
    Store(0, A, 0);
    return 0;
}
int Fibbonacci(int num)
{
    if (num == 0)
    {
        return 0;
    }
    else if (num == 1)
    {
        return 1;
    }

    return Fibbonacci(num - 1) + Fibbonacci(num - 2);
}
int Store(int i, int A[], int range)
{
    if (i < 10)
    {
        A[i] = Fibbonacci(range);
        return Store(i + 1, A, range + 1);
    }
    for (i = 10 - 1; i >= 0; i--)
    {
        printf("%d\t", A[i]);
    }
    return 0;
}
