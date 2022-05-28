///////////////////////////////////////////////////////////////////////////////////////////////////
// Problem Statement 5: Write a program which display LARGEST digits of all element from 
//                       singly linear Linked list.
////////////////////////////////////////////////////////////////////////////////////////////////////

/* 

INPUT : | 11 | -> | 250 | -> | 532 | -> | 419 | -> Null
 
OUTPUT :  1  5  5  9

*/


#include <stdio.h>
#include<stdlib.h>

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


     void DisplayLarge(PPNODE head)
     {
         PNODE temp = NULL;
         temp = *head; 
         int iDigit =0;
         int iLargest = 0;   // 0 is Minimum value of Integer. (considering only +ve data in LL)
         
         while(temp != NULL)
         {
             while(temp->data != 0)
             {
                iDigit = temp->data % 10;
                if(iLargest < iDigit)
                {
                    iLargest  = iDigit; 
                }
                temp->data = temp->data / 10;
             }
             printf(" %d ", iLargest );
             iLargest = 0;
             temp = temp->next;
         }
     } 

  
    
int main()
{
    int iRet=0; 
    PNODE first = NULL;

    InsertFirst(&first, 419);
    InsertFirst(&first, 532);
    InsertFirst(&first, 250);  
    InsertFirst(&first, 11);
  
     Dsiplay(first);

     DisplayLarge(&first);
    
    return 0;

}