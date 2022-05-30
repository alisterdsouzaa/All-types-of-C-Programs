// Frequency of a specific number. 
#include<stdio.h>
#include<stdlib.h>


int ChkOccurence(int Arr[], int iLength, int Num)
{
    int iCnt = 0, iSum =0,Freq = 0;
    for(iCnt=0;iCnt<iLength; iCnt++)
    {
       if(Num==Arr[iCnt])
       {
         break;
       }
       
    }
    if(iCnt == iLength)
    {
    return -1;
    }
    else
    {
        return iCnt;
    }
}

int main()
{
    int *ptr = NULL;
    int iSize = 0, iCnt = 0, iRet = 0;
    int NumCkh;

    printf("Enter your number to check : ");
    scanf("%d", &NumCkh);

    printf("Enter the number of elements : ");
    scanf("%d", &iSize);

    ptr = (int *)malloc(iSize * sizeof(int));

    printf("Enter then number of elements of Array :\n");
    for(iCnt=0; iCnt<iSize; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    // Function call 
    iRet = ChkOccurence(ptr, iSize, NumCkh);
    printf("Minimum number is : %d", iRet);

   
    free(ptr);

    return 0;
}