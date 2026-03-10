/* Write a program to check whether two arrays are equal or not.

Input:  Array 1: 10 20 30 40
        Array 2: 10 20 30 40

Output: Arrays are equal

Input:  Array 1: 10 20 30 40
        Array 2: 10 20 35 40

Output: Arrays are not equal

*/
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 



#include<stdio.h>
#include<stdlib.h>

int CheckArrayEqual(int Arr1[], int Arr2[], int iSize1, int iSize2)
{
    int i = 0;

    if(iSize1 != iSize2)
    {
        return 0;   // Not equal (different sizes)
    }

    for(i = 0; i < iSize1; i++)
    {
        if(Arr1[i] != Arr2[i])
        {
            return 0;   // Not equal
        }
    }

    return 1;   // Equal
}

int main()
{
    int Arr1[] = {10, 20, 30, 40};
    int Arr2[] = {10, 20, 30, 40};

    int iSize1 = sizeof(Arr1)/sizeof(Arr1[0]);
    int iSize2 = sizeof(Arr2)/sizeof(Arr2[0]);

    int iRet = 0;

    iRet = CheckArrayEqual(Arr1, Arr2, iSize1, iSize2);

    if(iRet == 1)
    {
        printf("Arrays are equal\n");
    }
    else
    {
        printf("Arrays are not equal\n");
    }

    return 0;

}

