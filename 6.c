// Finding Primes in a Matrix
#include <stdio.h>
int PrimeCheck(int i, int num);
int main()
{
    int M[2][3];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            M[i][j] = i + j * 2;
            if (PrimeCheck(2, M[i][j]) == 0)
            {
                printf("%d ", M[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}
int PrimeCheck(int i, int num)
{
    if (i < num)
    {
        if (num % i == 0)
        {
            return -1;
        }
        return PrimeCheck(i + 1, num);
    }
    return 0;
}