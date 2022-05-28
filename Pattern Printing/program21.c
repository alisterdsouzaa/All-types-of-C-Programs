// Character 

/* 

a
a b
a b c
a b c d


*/


#include<stdio.h>

void Pattern(int iRow, int iColumn)
{
    int i = 0, j = 0;
    char ch = '\0';



    for(i = 1; i<=iRow; i++) 
    {
        for(j =1 ,ch ='a'; j<=i; j++, ch++)
        {
           
          printf("%c\t",ch);
                   
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
        

