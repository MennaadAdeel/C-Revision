#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    long long int Bnum1,Bnum2;
    int calc,des=0,i=0;
    printf("Enter the binary number :: ");
    scanf("%lld",&Bnum1);
    Bnum2 =Bnum1;
    while (Bnum1 != 0)
    {
        calc = Bnum1 %10;
        Bnum1 /=10;
        des =des + calc *(pow(2,i));
        i=i+1;
    }
    printf("%lld in binary = %d in decimal",Bnum2,des);
    return 0;
}
