/* Write a program that accepts n numbers from the user, stores them in an array, and rotates the array anticlockwise k times.


Input:  1 2 3 4 5
        k = 2

Output: Array after 2 anticlockwise rotations: 3 4 5 1 2
*/
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>

void RotateAnticlockwise(int Arr[], int iSize, int k)
{
    int i = 0, temp = 0;

    k = k % iSize;

    while(k > 0)
    {
        temp = Arr[0];

        for(i = 0; i < iSize - 1; i++)
        {
            Arr[i] = Arr[i + 1];
        }

        Arr[iSize - 1] = temp;

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

    RotateAnticlockwise(ptr, iLength, k);

    printf("Array after %d anticlockwise rotations : \n", k);
    for(i = 0; i < iLength; i++)
    {
        printf("%d ", ptr[i]);
    }
    printf("\n");

    free(ptr);

    return 0;
}


