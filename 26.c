// Primes in a Matrix
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int PrimeCheck(int start, int number);
int main()
{
    time_t t;
    srand((unsigned)time(&t));
    // rand() % 100;
    int A[3][2];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            A[i][j] = rand() % 100;
            if (PrimeCheck(2, A[i][j]) == 0)
            {
                printf("%d\t", A[i][j]);
            }
        }
    }
    return 0;
}
int PrimeCheck(int start, int number)
{
    if (start < number)
    {
        if (number % start == 0)
        {
            return -1;
        }
        return PrimeCheck(start + 1, number);
    }
    return 0;
}