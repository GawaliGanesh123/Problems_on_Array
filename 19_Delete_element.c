/* Write a program that deletes an element (key) from a fixed-size array by searching its position and then shifting remaining elements.

Example:
Array = 10 20 30 40 50
Key = 30

Output:
10 20 40 50 _
*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 
  
#include<stdio.h>

void DeleteByValue(int Arr[], int isize, int key)
{
    int pos = -1;

    for(int i = 0; i < isize; i++)
    {
        if(Arr[i] == key)
        {
            pos = i;   
            break;
        }
    }

    if(pos == -1)
    {
        printf("Element not found\n");
        return;
    }

    for(int i = pos; i < isize - 1; i++)
    {
        Arr[i] = Arr[i + 1];
    }

    Arr[isize - 1] = 0;
}

int main()
{
    int Arr[5] = {10, 20, 30, 40, 50}; 
    int key = 30;

    DeleteByValue(Arr, 5, key);

    printf("Array after deletion:\n");
    for(int i = 0; i < 5; i++)
    {
        printf("%d ", Arr[i]);
    }

    return 0;
}



