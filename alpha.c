#include <stdio.h>
int main()
{
    char h;
    printf("Enter a character: ");
    scanf("%c",&h);

    
    if( (h>='a' && h<='z') || (h>='A' && h<='Z'))
        printf("%c is an alphabet.",h);
   
   else
        printf("%c is not an alphabet.",h);

    return 0;
}
