/* Accept n elements from the user and store them in an array. Then input another number and determine the index at which this number occurs.
   Return the index if found; otherwise, return an indicator showing the number is not present.

Input- 10 20 30 40 50
     Number:30
     
Output- 30 is occured in the array at index 2


Input- 11 21 31 41 51
     Number:25
     
Output- There is no 25 in the array

*/
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////        


#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int CheckOccurance(int Arr[], int iSize, int iNo)
{
    int iCnt =0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)    
        {
            break;
        }
    }
    
    if(iCnt == iSize)
    {
        return -1;
    }
    else
    {
        return iCnt;
    }
}

int main()
{
    int *ptr = NULL;
    int iLength = 0, i = 0, iValue = 0, iRet = 0;

    printf("Enter number of elements : \n");
    scanf("%d",&iLength);

    ptr = (int *)malloc(iLength * sizeof(int));

    printf("Enter the elements : \n");

    for(i = 0 ;i < iLength; i++)
    {
        scanf("%d",&ptr[i]);
    }

    printf("Enter the element to findout the index  : \n");
    scanf("%d",&iValue);

    iRet = CheckOccurance(ptr, iLength, iValue);
    if(iRet == -1)
    {
        printf("There is no %d in the array\n",iValue);
    }
    else
    {
         printf("%d is occured in the array at index %d\n",iValue,iRet);
    }

    free(ptr);

    return 0;

}
