//////////////////////////////////////////////////////////////////////////////////
// Problem Statement 2 : Accept N numbers from the user and return diff between frequency
//                      of even numbers and odd numbers.
//////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include<stdlib.h>

int Frequency(int Arr[],int iSize)
{
     int iCnt = 0, iEvenFreq = 0, iOddFreq = 0;
     for(iCnt=0; iCnt<iSize; iCnt++)
     {
         if(Arr[iCnt]%2 == 0)
         {
           iEvenFreq++;
         }
         else{
             iOddFreq++;
         }
     }
    return iEvenFreq - iOddFreq;     
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
        printf("Enter element num %d:", iCnt+1);
        scanf("%d", &ptr[iCnt]);
    }

     iRet = Frequency(ptr, iSize);
     printf("The difference between Frequency of even numbers and odd numbers is : %d", iRet);

    free(ptr);
    return 0;
}
