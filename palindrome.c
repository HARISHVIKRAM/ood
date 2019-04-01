#include <stdio.h>
int main()
{
    int h, reversedInteger = 0, remainder, originalInteger;

    printf("Enter an integer: ");
    scanf("%d", &h);

    originalInteger = h;
    
    while( h!=0 )
    {
        remainder = h%10;
        reversedInteger = reversedInteger*10 + remainder;
        h /= 10;
    }

    
    if (originalInteger == reversedInteger)
        printf("%d is a palindrome.", originalInteger);
    else
        printf("%d is not a palindrome.", originalInteger);
    
    return 0;
}
