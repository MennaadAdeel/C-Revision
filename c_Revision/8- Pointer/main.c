#include <stdio.h>
#include <stdlib.h>


void Get_Max_Min(int arr[],int *max,int *min)
{
    *max = arr[0];
    *min = arr[0];
    for (int i = 0; i < 4; i++)
    {
        if(*max <= arr[i])
           *max =arr[i];
        else if(*min >= arr[i])
           *min =arr[i];
    }


}


int main()
{
    int arr[4];
    int min,max;
    printf("Enter the four numbers ::\n");
    for (int i = 0; i < 4; i++)
    {
        scanf("%d",&arr[i]);
    }

    Get_Max_Min(arr,&max,&min);
    printf("Minimum element in array is :: %d\n",min);
    printf("Maximum element in array is :: %d\n",max);

    return 0;
}
