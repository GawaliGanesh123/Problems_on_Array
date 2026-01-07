/* Write a program that accepts n numbers from the user, stores them in an array,
   and checks whether the array is sorted in ascending order.

Input: 10 20 30 40 50
Output: Array is sorted

Input: 10 50 30 40
Output: Array is not sorted
*/
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool isSorted(int Arr[], int iSize)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize - 1; iCnt++)
    {
        if(Arr[iCnt] > Arr[iCnt + 1])    
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int *ptr = NULL;
    int iLength = 0, i = 0;
    bool bRet = false;

    printf("Enter number of elements : \n");
    scanf("%d",&iLength);

    ptr = (int *)malloc(sizeof(int) * iLength);

    printf("Enter the elements : \n");
    for(i = 0; i < iLength; i++)
    {
        scanf("%d",&ptr[i]);
    }

    bRet = isSorted(ptr, iLength);

    if(bRet == true)
    {
        printf("Array is sorted\n");
    }
    else
    {
        printf("Array is not sorted\n");
    }

    free(ptr);

    return 0;
}



