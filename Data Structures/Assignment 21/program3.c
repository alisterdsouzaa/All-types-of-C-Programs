///////////////////////////////////////////////////////////////////////////////////////////////////
// Problem Statement 3: Write a program which Display product of all element from 
//                       singly linear Linked list.
////////////////////////////////////////////////////////////////////////////////////////////////////

/* 

INPUT : | 11 | -> | 20 | -> | 32 | -> | 41 | -> Null

OUTPUT :   1       2       6       4

*/


#include <stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct node 
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE head, int no)
{
  
     PNODE newn = NULL;
     newn = (PNODE)malloc(sizeof(NODE));

     newn-> data = no; 
     newn->next = NULL;

     if(*head == NULL) // LL is empty 
     {
         *head = newn; 
     }
     else
     {      // LL contains atleast one node.
            newn -> next= *head;
            *head = newn; 
     }

}

 void Dsiplay(PNODE head)
     {
        printf("Elements from LinkedList are : \n");

        while(head != NULL)
        {
            printf("| %d | -> ", head->data); 
            head = head -> next;
        }
        printf("Null\n");
     }


     void DisplayProduct(PPNODE head)
     {
         PNODE temp = NULL;
         temp = *head; 
         int iDigit = 0, iProduct = 1;
         
         while(temp != NULL)
         {
             while(temp->data != 0)
             {
                 iDigit = temp->data % 10;
                 if(iDigit>0)               // to exclude 0 
                 {
                 iProduct = iProduct * iDigit;
                 }
                 temp->data = temp->data / 10;  
             }
             printf("%d\t", iProduct);
             iProduct = 1;
             temp = temp->next; 
         }
     } 

  
    
int main()
{
    int iRet=0; 
    PNODE first = NULL;

    InsertFirst(&first, 41);
    InsertFirst(&first, 32);
    InsertFirst(&first, 20);  
    InsertFirst(&first, 11);
  
     Dsiplay(first);

    DisplayProduct(&first);
    
    return 0;

}