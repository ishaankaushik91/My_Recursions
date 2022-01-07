// 20 horizontal asterik
#include <stdio.h>
void Asterik(int times);
int main()
{
    Asterik(20);
    return 0;
}
void Asterik(int times)
{
    if (times >= 1)
    {
        printf("* ");
        return Asterik(times - 1);
    }
}