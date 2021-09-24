//1.Program to divide two numbers
#include<stdio.h>
	int Divide(int iNo1,int iNo2)
	{
		int iAns = 0;
		if(iNo2==0)
		{
			return -1;
		}	
		iAns= iNo1/iNo2;
		return iAns;
	}
	
int main()
	{
		int iValue1 = 25, iValue2 = 0;
		int iRet = 0;
		
		iRet =Divide(25,0);
		printf("Division is %d\n",iRet);
		
		return 0;
	}