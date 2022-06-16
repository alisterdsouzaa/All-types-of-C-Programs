///////////////////////////////////////////////////////////////////////////////////////////
// Problem Statement 2 :Write program which cheack whether 5th and 18th bit is On or oFF  
///////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

bool ChekBit(UINT iNo)
{
	int iMask=0X00020010;
	int iResult=0;
	
	iResult=iNo&iMask;
	
	if(iResult==0)
	{
		return false;
	}
	else
	{
		return true;
	}
	
}

int main()
{
	int iValue=0;
	bool bRet=false;
	
	printf("Enter the number\n");
	scanf("%d",&iValue);
	
	bRet=ChekBit(iValue);
	
	if(bRet==true)
	{
		printf("Bit is ON\n");
	}
	else
	{
		printf("Bit is OFF\n");
	}
	
	return 0;
}

/////////////////////////////////////////
// Input:    131088
// output:  Bit is ON
////////////////////////////////////////
