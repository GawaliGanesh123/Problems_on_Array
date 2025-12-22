/* Write a program that accepts n numbers from the user, stores them in an array, and then displays all the elements in reverse order, 
   starting from the last element back to the first.

Input- 10 15 20 25 30     
Output-30 25 20 15 10

Input- 11 21 31 41 51     
Output-51 41 31 21 11


*/
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////       

#include<stdio.h>
#include<stdlib.h>

void DisplayReverse(int Arr[], int iSize)   
{
    int iCnt = 0;

    for(iCnt = iSize-1; iCnt >= 0 ;iCnt--)
    {
        printf("%d\n",Arr[iCnt]);
    }
}

int main()
{
    int *ptr = NULL;
    int iLength = 0, i = 0;

    printf("Enter number of elements : \n");    
    scanf("%d",&iLength);

    ptr = (int *)malloc(sizeof(int) * iLength); 

    printf("Enter the elements : \n");      
    for(i = 0; i < iLength; i++)
    {
       scanf("%d",&ptr[i]); 
    }

    printf("Elements in the reverse order : \n");

    DisplayReverse(ptr,iLength);   

    free(ptr);      

    return 0;

}


