#include <stdio.h>
int main()
{
    long long h;
    int count = 0;

    printf("Enter an integer: ");
    scanf("%lld", &h);

    while(h != 0)
    {
        // n = n/10
        h /= 10;
        ++count;
    }

    printf("Number of digits: %d", count);
}
