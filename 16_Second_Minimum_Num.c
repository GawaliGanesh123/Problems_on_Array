/* Write a program that accepts n integers from the user, stores them in an array, 
   and then determines the second smallest number among all the entered values.
   
Input- 30 40 50 35 45
Output- Second Minimum number is : 35


Input- 11 21 31 51 41 
Output- Second Minimum number is : 21

*/
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
 
int Second_Min(int arr[], int n)
{
    if(n < 2)
    {
        return -1;   
    }

    int min1, min2;

    if(arr[0] < arr[1])
    {
        min1 = arr[0];
        min2 = arr[1];
    }
    else
    {
        min1 = arr[1];
        min2 = arr[0];
    }

    for(int i = 2; i < n; i++)
    {
        if(arr[i] < min1)
        {
            min2 = min1;
            min1 = arr[i];
        }
        else if(arr[i] < min2 && arr[i] != min1)
        {
            min2 = arr[i];
        }
    }

    return min2;
}

int main()
{
    int *ptr = NULL;
    int iLength = 0, i = 0, iRet = 0;

    printf("Enter number of elements : \n");
    scanf("%d",&iLength);

    ptr = (int *)malloc(sizeof(int) * iLength);

    printf("Enter the elements : \n");
    for(i = 0; i < iLength; i++)
    {
        scanf("%d",&ptr[i]);
    }

    iRet = Second_Min(ptr, iLength);

    printf("Second Minimum number is : %d\n", iRet);

    free(ptr);

    return 0;
}


