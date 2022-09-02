#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,zeros=0,ones=0;
    printf("Enter the Number :: ");
    scanf("%d",&num);
    while (num / 2 !=0)
    {
        if(num % 2 == 0)
            zeros ++;
        else
            ones ++;
        
         num = num /2;
    }
    ones ++;

    printf("Total zero bits is :: %d\n",zeros);
    printf("Total ones bits is :: %d\n",ones);
  
    return 0;
}