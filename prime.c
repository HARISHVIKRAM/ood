#include <stdio.h>
int main()
{
    int o, i, flag = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &o);

    for(i = 2; i <= o/2; ++i)
    {
        
        if(o%i == 0)
        {
            flag = 1;
            break;
        }
    }

    if (o == 1) 
    {
      printf("1 is neither a prime nor a composite number.");
    }
    else 
    {
        if (flag == 0)
          printf("%d is a prime number.", o);
        else
          printf("%d is not a prime number.", o);
    }
    
    return 0;
}
