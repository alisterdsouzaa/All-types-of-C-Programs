/////////////////////////////////////////////////////////////////////////////
// Problem Statement 1 : Accept N numbers from the user and return 
//                      difference between Summition of even elements and
//                      Summition of odd elements. 
//////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include<stdlib.h>

int Diffrence(int Arr[],int iSize)
{
     int iCnt = 0, iSumEven = 0, iSumOdd =0;
     for(iCnt=0; iCnt<iSize; iCnt++)
     {
         if(Arr[iCnt]%2 == 0)
         {
             iSumEven = iSumEven + Arr[iCnt];
         }
         else{
             iSumOdd = iSumOdd + Arr[iCnt];
         }
     }
     return iSumEven - iSumOdd;
}

int main()
{
    int iSize = 0;
    int *ptr = NULL;
    int iCnt = 0, iRet = 0;

    printf("Enter the number of elements :");
    scanf("%d", &iSize);

    ptr = (int *) malloc(iSize * sizeof(int));
    
    if(ptr == NULL)
    {
        printf("Unable to allocate memory.");
        return -1;
    }

    printf("Enter your elements one by one :\n");

    for(iCnt = 0; iCnt<iSize; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    iRet = Diffrence(ptr, iSize);

    printf("The difference between Summition of even elements and Summition of odd elements is : %d  ", iRet);
    free(ptr);
    return 0;
}
