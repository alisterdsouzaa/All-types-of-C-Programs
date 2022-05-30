// Problems on N numbers.
// Dynamic Allocation 

#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[], int iLength)
{
    register int iCnt = 0;

    printf("Elements in Brr are :\n");
    for(iCnt = 0; iCnt<iLength; iCnt++)
    {
    printf("%d\n",Arr[iCnt]);
    }
  
}

int main()
{
    int *ptr = NULL;
  // auto int Brr[5]; Static Allocation. 
   register int iCnt =0;
    int iSize = 0;

    printf("Enter the number of Elements :\n");
    scanf("%d", &iSize);

    ptr = (int *)malloc(iSize * sizeof(int)); // Dynamic Allocation 

     printf("Enter elements :\n");

    for(iCnt = 0; iCnt<iSize; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    Display(ptr, iSize); 

    free(ptr);
    return 0;
}