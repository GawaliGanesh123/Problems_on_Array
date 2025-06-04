/* Accept 5 Numbers From user and print Count of Even numbers.

Input - 10 15 33 40 83 
Output- 2

*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<Stdio.h>

void CountEvenNum(int Data[], int iSize)
{
	int iCnt=0;
	int iEven=0;

	for(iCnt=0; iCnt<iSize; iCnt++)
	{
		if((Data[iCnt] % 2)== 0)
		{
			iEven++;
		}
	}
	  printf("Count of 'even Number:%d\n",iEven);
}

int main()
{
    int Arr[5], iCnt=0;

    printf("Enter the numbers:");
    for(iCnt=0; iCnt<5; iCnt++)
    {
    	scanf("%d",&Arr[iCnt]);
    }	

    printf("Elements from array:\n");
    for(iCnt=0; iCnt<5; iCnt++)
    {
    	printf("%d\t",Arr[iCnt]);
    }

    CountEvenNum(Arr,5);

	return 0;
}















