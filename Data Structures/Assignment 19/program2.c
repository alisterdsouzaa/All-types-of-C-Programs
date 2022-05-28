////////////////////////////////////////////////////////////////////////////
//  Problem Statement 2 : Write a program to search LAST occurence of 
//                      particular element in singly linear linkedlist. 
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

     int searchLastOcc(PPNODE head, int iNo)
     {      int iCnt = 1;
            int Last = 0;
            PNODE temp = *head; 

            while(temp->next != NULL)
            {
                if(temp->data == iNo)
                {
                    Last = iCnt;
                }
                iCnt++;
                temp = temp->next;
            }
        return Last;
     }
int main()
{
    int iRet = 0; 
    PNODE first = NULL;

    InsertFirst(&first, 70);   
    InsertFirst(&first, 30);
    InsertFirst(&first, 50);
    InsertFirst(&first, 40);
    InsertFirst(&first, 30);  
    InsertFirst(&first, 20);
    InsertFirst(&first, 10);
    
    iRet = Count(first);
    printf("Count is %d", iRet);

    Dsiplay(first);
    
    iRet = searchLastOcc(&first, 30);
    if(iRet !=0)
    {
        printf("The last occurrence of number in Linked is at node : %d", iRet);
    }
    else{
        printf(" NumIs Not Present In Linklist \n");
    }
    return 0;
}
