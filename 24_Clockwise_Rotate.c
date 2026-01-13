/* Write a program that accepts n numbers from the user, stores them in an array, and rotates the array clockwise k times.

Input: 1 2 3 4 5
       k = 2

Output: Array after 2 clockwise rotations: 4 5 1 2 3

*/
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////  


#include<stdio.h>
#include<stdlib.h>


void Rotate_Clockwise(int Arr[], int iSize, int k)
{
    int i = 0, temp = 0;

    
    k = k % iSize;      // If k is larger than size

    while(k > 0)
    {
        temp = Arr[iSize - 1];

        for(i = iSize - 1; i > 0; i--)
        {
            Arr[i] = Arr[i - 1];
        }

        Arr[0] = temp;

        k--;
    }
}




int main()
{
    int *ptr = NULL;
    int iLength = 0, i = 0, k = 0;

    printf("Enter number of elements : \n");
    scanf("%d", &iLength);

    ptr = (int *)malloc(sizeof(int) * iLength);

    printf("Enter the elements : \n");
    for(i = 0; i < iLength; i++)
    {
        scanf("%d", &ptr[i]);
    }

    printf("Enter rotation value (k) : \n");
    scanf("%d", &k);

    Rotate_Clockwise(ptr, iLength, k);

    printf("Array after %d clockwise rotations : \n", k);
    for(i = 0; i < iLength; i++)
    {
        printf("%d ", ptr[i]);
    }
    printf("\n");

    free(ptr);

    return 0;
}



