#include <stdio.h>
#include <stdlib.h>

int main()
{
    long int year;
    printf("Enter Year :: ");
    scanf("%ld",&year);
    if((year%4 == 0 && year % 100 >0) || year % 400 ==0)
    {
        printf("%ld is a leap year",year);
    }
    else
    {
        printf("%ld is not a leap year",year);

    }
    return 0;
}
