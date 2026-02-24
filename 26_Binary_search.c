/* Write a program to perform Binary Search on a sorted array.

Input: 10 20 30 40 50
Search Element: 30

Output: Element found at index 2
*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>

int BinarySearch(int Arr[], int iSize, int iValue)
{
    int iStart = 0, iEnd = iSize - 1, iMid = 0;

    while(iStart <= iEnd)
    {
        iMid = (iStart + iEnd) / 2;

        if(Arr[iMid] == iValue)
        {
            return iMid;  
        }
        else if(iValue > Arr[iMid])
        {
            iStart = iMid + 1;   
        }
        else
        {
            iEnd = iMid - 1;     
        }
    }

    return -1;   
}

int main()
{
    int Arr[] = {10, 20, 30, 40, 50};
    int iLength = sizeof(Arr)/sizeof(Arr[0]);
    int iValue = 30;
    int iRet = 0;

    iRet = BinarySearch(Arr, iLength, iValue);

    if(iRet != -1)
    {
        printf("Element found at index %d\n", iRet);
    }
    else
    {
        printf("Element not found\n");
    }

    return 0;
}