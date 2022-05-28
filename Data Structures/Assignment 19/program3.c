////////////////////////////////////////////////////////////////////////////
//  Problem Statement 3 : Write a program to return addition of all the 
//                       element in singly linear linkedlist. 
/////////////////////////////////////////////////////////////////////////////


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

     int Count(PNODE head)
     {
         int iCnt = 0;
        while(head != NULL)
        {
           iCnt++;
            head = head -> next;
        }
        return iCnt; 
     }

     int Addition(PPNODE head)
     {
         int iAdd = 0;
         PNODE temp = NULL;
         temp = *head;
       while((temp) != NULL)
       {
         iAdd = iAdd + (temp)->data;
         temp = (temp)->next;
       }
        return iAdd;
     }
    
int main()
{
    int iRet = 0; 
    PNODE first = NULL;

    InsertFirst(&first, 40);
    InsertFirst(&first, 30);  
    InsertFirst(&first, 20);
    InsertFirst(&first, 10);
    
    iRet = Count(first);
    printf("Count is %d", iRet);

    Dsiplay(first);
    
    iRet = 0;

    iRet = Addition(&first);
    printf("Add of all the data members from nodes of LL are : %d", iRet);
    

    return 0;

}
