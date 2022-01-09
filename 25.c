// Find first repeating integer in Array
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int Repetition(int i, int A[]);
int main()
{
    time_t t;
    srand((unsigned)time(&t));
    // rand() % 100;
    int A[10];

    for (int i = 0; i < 10; i++)
    {
        A[i] = rand() % 10;
    }
    Repetition(0, A);
    return 0;
}
int Repetition(int i, int A[])
{
    if (i < 10)
    {
        if (A[i] == A[i + 1])
        {
            printf("%d Repeated!\n", A[i]);
            return A[i];
        }
        return Repetition(i + 1, A);
    }
    return 0;
}