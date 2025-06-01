/* Accept 5 Numbers From user and print Average of that numbers.

Input - 10 20 30 40 50 
Output- 30

*/




#include<Stdio.h>

void Average(int Data[], int iSize)
{
	int iCnt=0, iSum=0;

	for(iCnt=0; iCnt<iSize; iCnt++)
	{
		iSum= iSum+Data[iCnt];
	}

	printf("Average is:%d\n",iSum/iSize);
}

int main()
{
	int Arr[5], iCnt=0;

	printf("Enter the elements:\n");
	for(iCnt=0; iCnt<5; iCnt++)
	{
	scanf("%d",&Arr[iCnt]);
	}

	printf("Elements are:\n");
	for(iCnt=0; iCnt<5; iCnt++)
	{
		printf("%d\t",Arr[iCnt]);
	}

     Average(Arr,5);

	return 0;
}