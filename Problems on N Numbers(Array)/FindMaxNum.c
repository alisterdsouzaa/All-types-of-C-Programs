// Addition of N numbers.
#include<stdio.h>
#include<stdlib.h>

//Find Maximum number function.
int MaximumNumber(int Arr[], int iLength)
{
    int iCnt = 0, iSum =0, iMax = Arr[0];
    for(iCnt=0;iCnt<iLength; iCnt++)
    {
       if(iMax<Arr[iCnt])
       {
           iMax = Arr[iCnt];
       }
    }
    return iMax;
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

    //Function Call. 
    iRet = MaximumNumber(ptr, iSize);
    printf("%d", iRet);
    free(ptr);

    return 0;
}