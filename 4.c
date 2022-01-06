// Sum of Prime numbers in a Range
#include <stdio.h>
int PrimeCheck(int tester, int num); // Prime Test
int Summation(int start, int end); // Range
int main()
{
    printf("%d\n", Summation(0, 10));
    return 0;
}
int PrimeCheck(int tester, int num)
{
    if (tester < num)
    {
        if (num % tester == 0)
        {
            return -1;
        }
        return PrimeCheck(tester + 1, num);
    }
    return 0;
}
int Summation(int start, int end)
{
    if (start <= end)
    {
        if (PrimeCheck(2, start) == 0)
        {
            return start + Summation(start + 1, end);
        }
        return Summation(start + 1, end);
    }
    return 0;
}