/* Write a program that accepts n integers from the user, stores them in an array, 
   and then determines the second largest number among all the entered values.
   
Input- 30 40 50 35 45
Output- Second largest number is : 45


Input- 11 21 31 51 41 
Output- Second largest number is : 41

*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// /////////////////////////// 


#include<stdio.h>
#include<stdlib.h>

int Second_Maximum(int Arr[], int iSize)
{
    int iMax1 = Arr[0];
    int iMax2 = Arr[0];
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] > iMax1)
        {
            iMax1 = Arr[iCnt];
        }
    }

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] > iMax2 && Arr[iCnt] < iMax1)
        {
            iMax2 = Arr[iCnt];
        }
    }

    return iMax2;
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

    iRet = Second_Maximum(ptr, iLength);

    printf("Second largest number is : %d\n", iRet);

    free(ptr);

    return 0;
}

