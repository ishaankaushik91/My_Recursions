// N^M of a number
#include <stdio.h>
int Power(int start, int number, int exponent); // Parameters
int main()
{
    printf("%d\n", Power(1, 5, 2));
    return 0;
}
int Power(int start, int number, int exponent) // N^M
{
    if (start <= exponent)
    {
        return number * Power(start + 1, number, exponent);
    }
    return 1;
}