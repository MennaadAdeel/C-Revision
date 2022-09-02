#include <stdio.h>
#include <stdlib.h>


void MaxNumber(int arr[])
{
    int max = arr[0];
    for (int i = 0; i < 4; i++)
    {
        if(max <= arr[i])
           max =arr[i];
    }

    printf("The maximum number is :: %d\n",max);
}



void MinNumber(int arr[])
{
    int min = arr[0];
    for (int i = 0; i < 4; i++)
    {
        if(min >= arr[i])
           min =arr[i];
    }

    printf("The minimum number is :: %d\n",min);
}


int main()
{
    int arr[4];
    printf("Enter the fourvnumbers ::\n");
    for (int i = 0; i < 4; i++)
    {
        scanf("%d",&arr[i]);
    }

    MaxNumber(arr);
    MinNumber(arr);

    return 0;
}
