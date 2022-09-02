#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,power,result=1;
    printf("Enter the number :: ");
    scanf("%d",&num);
    printf("Enter the power :: ");
    scanf("%d",&power);
    for (int i = 0; i < power; i++)
    {
        result = result *num;
    }
    
    printf("Answer = %d",result);
    return 0;
}
