/* Write a program to merge two sorted arrays into a single sorted array.

Input:  Array 1: 10 20 30
        Array 2: 15 25 35

Output: 10 15 20 25 30 35

Input:  Array 1: 1 3 5 7
        Array 2: 2 4 6 8

Output:  1 2 3 4 5 6 7 8
*/
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>

void MergeSortedArrays(int Arr1[], int iSize1, int Arr2[], int iSize2, int Arr3[])
{
    int i = 0, j = 0, k = 0;

    while(i < iSize1 && j < iSize2)
    {
        if(Arr1[i] < Arr2[j])
        {
            Arr3[k] = Arr1[i];
            i++;
        }
        else
        {
            Arr3[k] = Arr2[j];
            j++;
        }
        k++;
    }

    // Copy remaining elements of Arr1
    while(i < iSize1)
    {
        Arr3[k] = Arr1[i];
        i++;
        k++;
    }

    // Copy remaining elements of Arr2
    while(j < iSize2)
    {
        Arr3[k] = Arr2[j];
        j++;
        k++;
    }
}

int main()
{
    int Arr1[] = {10, 20, 30};
    int Arr2[] = {15, 25, 35};

    int iSize1 = sizeof(Arr1)/sizeof(Arr1[0]);
    int iSize2 = sizeof(Arr2)/sizeof(Arr2[0]);

    int Arr3[iSize1 + iSize2];
    int i = 0;

    MergeSortedArrays(Arr1, iSize1, Arr2, iSize2, Arr3);

    printf("Merged Sorted Array : \n");
    for(i = 0; i < iSize1 + iSize2; i++)
    {
        printf("%d ", Arr3[i]);
    }

    printf("\n");

    return 0;

}
