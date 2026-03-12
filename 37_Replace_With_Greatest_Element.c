/* Write a program to replace every element with the greatest element on its right side.

Input: Array: 16 17 4 3 5 2

Output: 17 5 5 5 2 -1


Input: Array: 10 5 8 20

Output:20 20 20 -1

*/
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 


 
#include<stdio.h>
#include<stdlib.h>

void ReplaceWithGreatest(int Arr[], int iSize)
{
    int i = 0;
    int iMaxRight = -1;
    int temp = 0;

    for(i = iSize - 1; i >= 0; i--)
    {
        temp = Arr[i];          // Stored current value
        Arr[i] = iMaxRight;     // Replace with max on right

        if(temp > iMaxRight)
        {
            iMaxRight = temp;   // Update maximum
        }
    }
}

int main()
{
    int Arr[] = {16, 17, 4, 3, 5, 2};
    int iLength = sizeof(Arr)/sizeof(Arr[0]);
    int i = 0;

    ReplaceWithGreatest(Arr, iLength);

    printf("Array after replacement : \n");
    for(i = 0; i < iLength; i++)
    {
        printf("%d ", Arr[i]);
    }

    printf("\n");

    return 0;

}


