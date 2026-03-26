/* Write a program to find the majority element in an array.
   (Element that appears more than n/2 times)

Input: Array: 2 2 1 1 2 2 2

Output: Majority element is 2


Input: Array: 1 2 3 4 5

Output: No majority element

*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int FindMajority(int Arr[], int iSize)
{
    int i = 0;
    int candidate = 0;
    int count = 0;

    for(i = 0; i < iSize; i++)
    {
        if(count == 0)
        {
            candidate = Arr[i];
            count = 1;
        }
        else if(Arr[i] == candidate)
        {
            count++;
        }
        else
        {
            count--;
        }
    }

    count = 0;
    for(i = 0; i < iSize; i++)
    {
        if(Arr[i] == candidate)
        {
            count++;
        }
    }

    if(count > iSize / 2)
    {
        return candidate;
    }

    return -1;  // No majority
}

int main()
{
    int Arr[] = {2, 2, 1, 1, 2, 2, 2};
    int iLength = sizeof(Arr)/sizeof(Arr[0]);
    int iRet = 0;

    iRet = FindMajority(Arr, iLength);

    if(iRet != -1)
    {
        printf("Majority element is %d\n", iRet);
    }
    else
    {
        printf("No majority element\n");
    }

    return 0;
}