///////////////////////////////////////////////////////////////////////////////////////////////////
// Problem Statement 4: Write a program which Display Smallest digits of all element from 
//                       singly linear Linked list.
////////////////////////////////////////////////////////////////////////////////////////////////////

/* 

INPUT : | 11 | -> | 250 | -> | 532 | -> | 415 | -> Null

OUTPUT :  1  0  2  1

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


     void DisplaySmall(PPNODE head)
     {
         PNODE temp = NULL;
         temp = *head; 
         int iDigit =0;
         int iSmallest = 2147483647;   // 2147483647 Max value of Integer.
         
         while(temp != NULL)
         {
             while(temp->data != 0)
             {
                iDigit = temp->data % 10;
                if(iSmallest > iDigit)
                {
                    iSmallest = iDigit; 
                }
                temp->data = temp->data / 10;
             }
             printf(" %d ", iSmallest);
             iSmallest = 2147483647;
             temp = temp->next;
         }
     } 

  
    
int main()
{
    int iRet=0; 
    PNODE first = NULL;

    InsertFirst(&first, 415);
    InsertFirst(&first, 532);
    InsertFirst(&first, 250);  
    InsertFirst(&first, 11);
  
     Dsiplay(first);

     DisplaySmall(&first);
    
    return 0;

}