// Sum of Squares
#include <stdio.h>
int Summation(int start, int end); // Range
int main()
{
    printf("%d\n", Summation(0, 10));
    return 0;
}
int Summation(int start, int end)
{
    if (start <= end)
    {
        return start * start + Summation(start + 1, end);
    }
    return 0;
}