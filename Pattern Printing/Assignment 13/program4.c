/////////////////////////////////////////////////////////////////////////////////////////
// Problem Statement 4 : Accept num from user of row and column and display pattern
/////////////////////////////////////////////////////////////////////////////////////////

/* Pattern to display 

    Row = 3  Column = 4  

    *  #  *  #
    *  #  *  #
    *  #  *  #
  
*/

#include<stdio.h>

void displayPattern(int iRow, int iColumn)
{
    int i = 0, j = 0;

    for(i =1; i <= iRow; i++)
    {
        for(j=1; j<=iColumn; j++)
        {
            if(j%2 != 0)
            {
            printf("*\t");
            }
            else{
                printf("#\t");
            }
        }
        printf("\n");
    }
}

int main()
{
    int iRow = 0, iColumn = 0;

    printf("Enter the number of rows : ");
    scanf("%d", &iRow);

    printf("Enter the number of Coulmns :");
    scanf("%d", &iColumn);

    displayPattern(iRow, iColumn);

    return 0;
}