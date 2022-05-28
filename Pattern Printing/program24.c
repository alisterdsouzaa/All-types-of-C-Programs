// Character Pattern.

/* 
 *       *       *       *
 2       3       4       5
 3       4       5       6
 4       5       6       7
 *       *       *       *

*/


#include<stdio.h>

void Pattern(int iRow, int iColumn)
{
    int i, j, k;

    for(i=1 ; i<=iRow; i++)
    {
        k =i;
        for(j=1; j<=iColumn; j++)
        {
        
            if(i==1 || i==iRow)
            {
                printf("*\t");
            }
            else{
            ; 
                printf("%d\t", k);
            }
            k++;
        
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
        

