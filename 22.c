// Display cube n square of square of n natural nos.
#include <stdio.h>
void SqnCb(int range);
int main()
{
    printf("Square\tCube\n\n");
    SqnCb(5);
}
void SqnCb(int range)
{
    if (range >= 1)
    {
        printf("%d\t%d\n", range * range, range * range * range);
        return SqnCb(range - 1);
    }
}