/* Write a program to move all zeros to the end of an array while keeping all non-zero elements in their original order.


Input : 1 0 5 0 8 0 9

Output: 1 5 8 9 0 0 0
*/

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>

void Move_Zero(int Arr[], int iSize)
{
    int i = 0, j = 0;

    for(i = 0; i < iSize; i++)
    {
        if(Arr[i] != 0)
        {
            Arr[j] = Arr[i];
            j++;
        }
    }

    while(j < iSize)
    {
        Arr[j] = 0;
        j++;
    }
}


int main()
{
    int *ptr = NULL;
    int iLength = 0, i = 0;

    printf("Enter number of elements : \n");
    scanf("%d",&iLength);

    ptr = (int *)malloc(sizeof(int) * iLength);

    printf("Enter the elements : \n");
    for(i = 0; i < iLength; i++)
    {
        scanf("%d",&ptr[i]);
    }

    Move_Zero(ptr, iLength);

    printf("Array after moving zeros : \n");
    for(i = 0; i < iLength; i++)
    {
        printf("%d ", ptr[i]);
    }

    printf("\n");

    free(ptr);

    return 0;
}

