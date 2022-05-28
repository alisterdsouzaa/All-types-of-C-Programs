///////////////////////////////////////////////////////////////////////////////////////////////
// Problem Statement 5 : Accept N numbers from the user and return product of all odd elements
////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include<stdlib.h>

int product(int Arr[], int iLength)
{
    int iOddProduct = 1;
    for(int iCnt=0; iCnt<iLength;iCnt++)
    {
        if((Arr[iCnt]%2)!=0)
        {
            iOddProduct = iOddProduct * Arr[iCnt];
        }
    }
    return iOddProduct;
}

int main()
{
    int iSize = 0;
    int *p = NULL;
    int iCnt = 0, iRet = 0;

    printf("Enter the number of elements :");
    scanf("%d", &iSize);

    p = (int *)malloc(iSize * sizeof(int));

    for(iCnt=0; iCnt<iSize; iCnt++)
    {
        printf("Enter Element number %d :", iCnt+1);
        scanf("%d", &p[iCnt]);
    }
    
    iRet = product(p, iSize );

    printf("The product of odd elements is : %d", iRet);

    return 0;
}