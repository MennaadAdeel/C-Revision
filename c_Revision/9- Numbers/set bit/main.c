#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,Bnum,i,arr[100],n;
    printf("Enter any number :: ");
    scanf("%d",&num);
    i=0;
    while (num !=0)
    {
         Bnum = num %2;
         arr[i] =Bnum;
         num = num /2;
         i++;
    }

    printf("Enter the nth bit to check :: ");
    scanf("%d",&n);
    printf("The %dth bit is set to %d",n,arr[n]);

    return 0;
}
