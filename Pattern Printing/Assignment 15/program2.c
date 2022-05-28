//////////////////////////////////////////////////////////////
// Problem Statement 2 : Dsiplay pattern
///////////////////////////////////////////////////////////////

/* 

2 4 6 8 10
1 3 5 7 9
2 4 6 8 10
1 3 5 7 9

*/


#include<stdio.h>

void Pattern(int iRow, int iColumn)
{
    int i = 0, j = 0;
    int k = 1, l = 1;

    for(i = 1; i<=iRow;i++) 
    {
        k=1; l = 1;
        for(j =1; j<=iColumn; j++)
        {
           if(i %2 != 0)
           {
          printf("%d\t",k*2);
            k++;
           }
           else{
               printf("%d\t", l);
               l++; 
               l++;
           }
                   
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
        

