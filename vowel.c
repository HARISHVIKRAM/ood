#include <stdio.h>
int main()
{
    char h;
    int isLowercaseVowel, isUppercaseVowel;

    printf("Enter an alphabet: ");
    scanf("%c",&h);

    
    isLowercaseVowel = (h == 'a' || h == 'e' || h == 'i' || h == 'o' || h == 'u');

    isUppercaseVowel = (h == 'A' || h == 'E' || h == 'I' || h == 'O' || h == 'U');

    if (isLowercaseVowel || isUppercaseVowel)
        printf("%c is a vowel:", h);
    else
        printf("%c is a consonant:", h);
    return 0;
}
