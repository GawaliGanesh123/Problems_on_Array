/* Accept n elements from the user, store them in an array, and then input another number. 
   Find and return the Last occurrence index of that number. 
   If the number does not exist in the array, return a suitable indicator.

Input- 10 15 20 15 30
     Number:15
     
Output- 15 is occured in the array at last index 3


Input- 11 21 31 41 51
     Number:25
     
Output- There is no 25 in the array

*/
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////        

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


int CheckLastOccurance(int Arr[], int iSize, int iNo)
{
    int iCnt =0;
    
    for(iCnt = iSize-1; iCnt >= 0; iCnt--)
    {
        if(Arr[iCnt] == iNo)    
        {
            break;
        }
    }
    
    if(iCnt == -1)
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

    printf("Enter the element to findout the last occurance : \n");
    scanf("%d",&iValue);

    iRet = CheckLastOccurance(ptr, iLength, iValue);
    if(iRet == -1)
    {
        printf("There is no %d in the array\n",iValue);
    }
    else
    {
         printf("%d is occured in the array at last index %d\n",iValue,iRet);
    }

    free(ptr);

    return 0;

}



