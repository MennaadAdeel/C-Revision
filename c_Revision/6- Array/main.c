#include <stdio.h>
#include <stdlib.h>


int main()
{
    int n,odd=0,even=0;
    printf("Enter the size of array :: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the %d element in array ::\n",n);
    for(int i =0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if(arr[i]%2 == 0)
           even ++;
        else
           odd ++;
    }

    printf("Total even elements :: %d\n",even);
    printf("Total odd elements :: %d",odd);



    return 0;
}
