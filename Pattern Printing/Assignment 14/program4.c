//////////////////////////////////////////////////////////////
// Problem Statement 4 : Dsiplay pattern
///////////////////////////////////////////////////////////////

/* 

4 4 4 4 4
3 3 3 3 3
2 2 2 2 2
1 1 1 1 1

*/


#include<stdio.h>

void Pattern(int iRow, int iColumn)
{
    int i = 0, j = 0;
    int k = 0;

    for(i = 1,k=4 ; i<=iRow; k--, i++) 
    {
        for(j =1; j<=iColumn; j++)
        {
           
          printf("%d\t",k);
                   
        }
        printf("\n");
    }
}

int main()
{
    int iRow = 0;
    int iColumn = 0;

    printf("Enter the number of Rows :");
    scanf("%d", &iRow);

     printf("Enter the number of Columns :");
    scanf("%d", &iColumn);

    Pattern(iRow, iColumn);

    return 0;
}
        

