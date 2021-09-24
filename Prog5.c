//5. Accept number from user and check whether number is even or odd..
#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;


	BOOL ChkEven(int iNo1)
	{
		if((iNo1%2)==0)
		{
			printf("Number is Even");
		}
		else
		{
			printf("Number is Odd");
		}
	}


int main()
{
	int iValue = 0;
	
	BOOL bRet = FALSE;
	printf("Enter number:\n");
	scanf("%d",&iValue);

	bRet = ChkEven(iValue);

	return 0;
}
