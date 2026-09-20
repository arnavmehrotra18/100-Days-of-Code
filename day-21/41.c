#include <stdio.h>

int main()
{
    int n, temp, first, last, p = 1, middle, result;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;
    last = n % 10;

    while (temp >= 10)
    {
        temp = temp / 10;
        p = p * 10;
    }

    first = temp;

    middle = (n % p) / 10;

    result = last * p + middle * 10 + first;

    printf("After swapping: %d", result);

    return 0;
}