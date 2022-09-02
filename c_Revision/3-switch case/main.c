#include <stdio.h>
#include <stdlib.h>

int main()
{
    char operator;
    float op1,op2;
    printf("Enter an operator (+ , - , * , /)\n");
    scanf("%c",&operator);
    printf("Enter tow operands\n");
    scanf("%f",&op1);
    scanf("%f",&op2);
    switch (operator)
    {
    case '+' :
        printf("%0.1f + %0.1f = %0.1f",op1,op2,op1+op2);
        break;

     case '-' :

        printf("%.1f - %.1f = %.1f",op1,op2,op1-op2);
        break;

     case '*' :
        printf("%.1f * %.1f = %.1f",op1,op2,op1*op2);
        break;

     case '/' :
        printf("%.1f / %.1f = %.1f",op1,op2,op1/op2);
        break;

    default:
        printf("Enter a valid choise");
        break;
    }
    return 0;
}
