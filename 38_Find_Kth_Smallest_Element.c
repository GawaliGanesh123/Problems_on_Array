/* Write a program to find the Kth smallest element in an array.

Input: Array: 7 10 4 3 20 15
       K = 3

Output: 7

Input:  Array: 12 3 5 7 19
        K = 2

Output:5

*/
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void SortArray(int Arr[], int iSize)
{
    int i = 0, j = 0, temp = 0;

    for(i = 0; i < iSize - 1; i++)
    {
        for(j = 0; j < iSize - i - 1; j++)
        {
            if(Arr[j] > Arr[j + 1])
            {
                temp = Arr[j];
                Arr[j] = Arr[j + 1];
                Arr[j + 1] = temp;
            }
        }
    }
}

int KthSmallest(int Arr[], int iSize, int k)
{
    if(k <= 0 || k > iSize)
    {
        return -1;   // Invalid k
    }

    SortArray(Arr, iSize);

    return Arr[k - 1];
}

int main()
{
    int Arr[] = {7, 10, 4, 3, 20, 15};
    int iLength = sizeof(Arr)/sizeof(Arr[0]);
    int k = 3;
    int iRet = 0;

    iRet = KthSmallest(Arr, iLength, k);

    if(iRet != -1)
    {
        printf("%dth smallest element is : %d\n", k, iRet);
    }
    else
    {
        printf("Invalid value of k\n");
    }

    return 0;

}

