// display Even num from array. 

#include<stdio.h>
#include<stdlib.h>

void DisplayEven(int Arr[], int iLength)
{
    int iCnt = 0;
    int iCount = 0;

    printf("Even elements are :");
for(iCnt=0; iCnt<iLength; iCnt++)
{
    if(Arr[iCnt]%2 == 0)
    {
        printf("%d\n", Arr[iCnt]);
        iCount++;
    }
}

printf("Count of even numbers is %d : ", iCount);


}

int main()
{
    int *ptr = NULL;
    int iSize = 0;
    int iCnt = 0;

    printf("Enter number of elements : \n");
    scanf("%d", &iSize);
    ptr = (int *) malloc(iSize * sizeof(int));

    printf("Enter the values of array :\n");
    for(iCnt = 0; iCnt<iSize; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    DisplayEven(ptr,iSize);
    free(ptr);

    return 0;
}