// N^M of a numbers in a range
#include <stdio.h>
int Power(int start, int number, int exponent); // Parameters
void Range(int initial, int end); // Range to get Square Series of
int main()
{
    Range(1, 10);
    return 0;
}
int Power(int start, int number, int exponent)// N^M
{
    if (start <= exponent)
    {
        return number * Power(start + 1, number, exponent);
    }
    return 1;
}
void Range(int initial, int end)
{
    if (initial <= end)
    {
        printf("%d\n", Power(1, initial, 2));
        return Range(initial + 1, end);
    }
}