////////////////////////////////////////////////////////////////////////////
//  Problem Statement 4 : Write a program to search Largest Element of 
//                      particular element in singly linear linkedlist. 
/////////////////////////////////////////////////////////////////////////////
// | 110 | -> | 230 | -> | 320 | -> | 240 | -> Null
// Output : 320.

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

     int greatestElement(PPNODE head)
     {
         int iGreat = 0;
         PNODE temp = NULL;
         temp = *head;
       while((temp) != NULL)
       {
         if(temp->data > iGreat)
         {
             iGreat = temp->data;
         }
         temp = temp->next;
       }
        return iGreat;
     }
    
int main()
{
    int iRet = 0; 
    PNODE first = NULL;

    InsertFirst(&first, 240);
    InsertFirst(&first, 320);  
    InsertFirst(&first, 230);
    InsertFirst(&first, 110);
    
    iRet = Count(first);
    printf("Count is %d", iRet);

    Dsiplay(first);
    
    iRet = 0;

    iRet = greatestElement(&first);
    printf("greatest element from LL is  : %d", iRet);
    

    return 0;

}
