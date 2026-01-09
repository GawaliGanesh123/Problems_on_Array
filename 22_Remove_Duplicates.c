/* Write a program to removes duplicates from the sorted array in-place.

Input: 10 20 20 30 30 40

Output: 10 20 30 40
*/
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 

#include<stdio.h>
#include<stdlib.h>

int RemoveDuplicate(int Arr[], int iSize)
{
    int iCnt = 0, j = 1;

    if(iSize == 0)
    {
        return 0;
    }

    for(iCnt = 1; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] != Arr[iCnt - 1])
        {
            Arr[j] = Arr[iCnt];
            j++;
        }
    }

    return j;   
}

int main()
{
    int Arr[] = {10, 20, 20, 30, 30, 40}; 
    int iLength = sizeof(Arr)/sizeof(Arr[0]);
    int i = 0, iRet = 0;

    iRet = RemoveDuplicate(Arr, iLength);

    printf("Array after removing duplicates : \n");
    for(i = 0; i < iRet; i++)
    {
        printf("%d ", Arr[i]);
    }
    printf("\n");

    return 0;
}


