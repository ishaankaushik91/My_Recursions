// (1!/1) + (2!/2) + (3!/3) + (4!/4) + (5!/5) + ... + (n!/n)
#include <stdio.h>
int Call(int range);
int factorial(int num);
int main()
{
    printf("%d\n", Call(5));
    return 0;
}
int Call(int range)
{
    if (range >= 1)
    {
        return Call(range - 1) + factorial(range) / range;
    }
    return 0;
}
int factorial(int num)
{
    if (num >= 1)
    {
        return num * factorial(num - 1);
    }
    return 1;
}