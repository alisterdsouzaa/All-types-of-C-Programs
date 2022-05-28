//////////////////////////////////////////////////////////////////////////////////
// Problem Statement 5 : Accept N numbers from the user and return frequency
//                      of iNo from N numbers.
//////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include<stdlib.h>

int Frequency(int Arr[],int iSize, int iNo)
{
     int iCnt = 0, iFreq = 0;
     for(iCnt=0; iCnt<iSize; iCnt++)
     {
         if(Arr[iCnt] == iNo)
         {
           iFreq++;
         }
     }
    return iFreq;     
}
int main()
{
    int iSize = 0, iNo =0;
    int *ptr = NULL;
    int iCnt = 0, iRet = 0;


    printf("Enter the number No to check its frequency : ");
    scanf("%d", &iNo );

    printf("Enter the number of elements of Array :");
    scanf("%d", &iSize);

    ptr = (int *) malloc(iSize * sizeof(int));
    
    if(ptr == NULL)
    {
        printf("Unable to allocate memory.");
        return -1;
    }

    printf("Enter your Array elements one by one :\n");

    for(iCnt = 0; iCnt<iSize; iCnt++)
    {
        printf("Enter element num %d:", iCnt+1);
        scanf("%d", &ptr[iCnt]);
    }

     iRet = Frequency(ptr, iSize, iNo);
     printf("The Frequency of No is : %d", iRet);

    free(ptr);
    return 0;
}
