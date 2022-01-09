// in Array 100 random numbers & print primes in it under 50
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int PrimeCheck(int i, int number);
int main()
{
    time_t t;
    srand((unsigned)time(&t));
    // rand() % 100;
    int A[10];

    for (int i = 0; i < 10; i++)
    {
        A[i] = rand() % 100;
        if (PrimeCheck(2, A[i]) == 0 && A[i] < 50)
        {
            printf("%d\t", A[i]);
        }
    }

    return 0;
}
int PrimeCheck(int i, int number)
{
    if (i < number)
    {
        if (number % i == 0)
        {
            return -1;
        }
        return PrimeCheck(i + 1, number);
    }

    return 0;
}