#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node * next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void Display(PNODE first)
{
    while(first != NULL)                  // Type 1         
    {
        printf("| %d | --> ",first->data);
        first = first->next;
    }

    printf("NULL\n");
}

void InsertFirst(PPNODE first, int iNo)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = iNo;
    newn->next = NULL;

    if(NULL == *first)    
    {
        *first = newn;
    }

    else                  // LL contains atleast 1 node
    {
        newn->next = *first;
        *first = newn;
    }
}

void InsertLast(PPNODE first, int iNo)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = iNo;
    newn->next = NULL;

    if(*first == NULL)     // first
    {
        *first = newn;
    }

    else                  // LL contains atleast 1 node
    {
        temp = *first;
        while(temp->next != NULL)    // Type 2
        {
            temp = temp->next;
        }

        temp->next = newn;
    }
}

int LastOccur(PNODE first, int iNo)
{
    int iPos = 1;
    int iLastPos = -1;

    while(first != NULL)        // Type 1
    {
        if(first->data == iNo)      
        {
            iLastPos = iPos;
        }

        iPos++;
        first = first->next;
    }

    return iLastPos;
}

int main()
{
    PNODE head = NULL;
    int iRet = 0;

    InsertFirst(&head, 100);
    InsertFirst(&head, 510);
    InsertFirst(&head, 210);
    InsertFirst(&head, 11);
    InsertLast(&head, 101);
    InsertLast(&head, 121);

    Display(head);

    iRet = LastOccur(head, 101);

    if(iRet != -1)
    {
        printf("Last occurrence of %d is at position : %d\n",101,iRet);
    }
    
    else
    {
        printf("%d not found in linked list\n",101);
    }
    
    return 0;
}