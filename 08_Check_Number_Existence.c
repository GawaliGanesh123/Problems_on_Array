/* Accept n elements from the user and store them in an array. Then accept one more number and check if that number is present anywhere in the array. 
   Print whether the number exists or not.

Input- 10 20 30 40 50
     Number:30
     
Output- 30 is occured in the array


Input- 11 21 31 41 51
     Number:25
     
Output- There is no 25 in the array

*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////////        

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckOccurance(int Arr[], int iSize, int iNo)
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
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    int *ptr = NULL;
    int iLength = 0, i = 0, iValue = 0;
    bool bRet = false;

    printf("Enter number of elements : \n");
    scanf("%d",&iLength);

    ptr = (int *)malloc(iLength * sizeof(int));

    printf("Enter the elements : \n");

    for(i = 0 ;i < iLength; i++)
    {
        scanf("%d",&ptr[i]);
    }

    printf("Enter the element to findout the occurance : \n");
    scanf("%d",&iValue);

    bRet = CheckOccurance(ptr, iLength, iValue);
    if(bRet == true)
    {
        printf("%d is occured in the array\n",iValue);
    }
    else
    {
        printf("There is no %d in the array\n",iValue);
    }

    free(ptr);

    return 0;
}