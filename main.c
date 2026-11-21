
#include <stdio.h>
#include <stdlib.h>

int gcd(int m, int x)
{
    int remainder;

    while (x != 0)
    {
        remainder = m % x;
        m = x;
        x = remainder;
    }

    return abs(m);
}

int main(void)
{
    int inputNumber;
    int result;

    scanf("%d", &inputNumber);

    if (inputNumber > 9966990)
    {
        printf("NG");
        return 0;
    }

    result = gcd(9966990, inputNumber);
    printf("%d", result);

    return 0;
}
