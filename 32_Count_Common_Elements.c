/* Write a program to count common elements in two arrays.

Array 1: 1 2 3 4 5
Array 2: 3 4 5 6 7

Output: 3

Array 1: 10 20 30
Array 2: 40 50 60

Output: 0

*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
 

#include<stdio.h>
 
int CountCommon(int Arr1[], int iSize1, int Arr2[], int iSize2)
{
    int i = 0, j = 0;
    int iCount = 0;

    for(i = 0; i < iSize1; i++)
    {
        for(j = 0; j < iSize2; j++)
        {
            if(Arr1[i] == Arr2[j])
            {
                iCount++;
                break;   // avoid counting same element multiple times
            }
        }
    }

    return iCount;
}

int main()
{
    int Arr1[] = {1, 2, 3, 4, 5};
    int Arr2[] = {3, 4, 5, 6, 7};

    int iLength1 = sizeof(Arr1)/sizeof(Arr1[0]);
    int iLength2 = sizeof(Arr2)/sizeof(Arr2[0]);

    int iRet = CountCommon(Arr1, iLength1, Arr2, iLength2);

    printf("Number of common elements: %d\n", iRet);

    return 0;

}


