// Minimum Number 
#include<stdio.h>
#include<stdlib.h>


int MinimumNumber(int Arr[], int iLength)
{
    int iCnt = 0, iSum =0, iMin = Arr[0];
    for(iCnt=0;iCnt<iLength; iCnt++)
    {
       if(iMin>Arr[iCnt])
       {
           iMin = Arr[iCnt];
       }
       
    }
    return iMin;
}

int main()
{
    int *ptr = NULL;
    int iSize = 0, iCnt = 0, iRet = 0;

    printf("Enter the number of elements : ");
    scanf("%d", &iSize);

    ptr = (int *)malloc(iSize * sizeof(int));

    printf("Enter then number of elements :");
    for(iCnt=0; iCnt<iSize; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    // Function call 
    iRet = MinimumNumber(ptr, iSize);
    printf("Minimum number is : %d", iRet);

   
    free(ptr);

    return 0;
}