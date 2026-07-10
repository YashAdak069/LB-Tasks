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
typedef int BOOL;

#define TRUE 1 
#define FALSE 0

void Display(PNODE first)
{
    while(first != NULL)                  // Type 1         
    {
        printf("| %d | --> ",first->data);
        first = first->next;
    }

    printf("NULL\n");
}

BOOL Search(PNODE first, int iNo)
{
    while(first != NULL)                // Type 1
    {
        if(first->data == iNo)
        {
            return TRUE;
        }

        first = first->next;
    }

    return FALSE;
    
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

int main()
{
    PNODE head = NULL;
    BOOL bRet = FALSE;

    InsertFirst(&head, 101);
    InsertFirst(&head, 51);
    InsertFirst(&head, 21);
    InsertFirst(&head, 11);
    InsertLast(&head, 101);
    InsertLast(&head, 121);

    Display(head);
    
    bRet = Search(head, 51);

    if(bRet == TRUE)
    {
        printf("%d is present\n",51);
    }
    
    else
    {
        printf("%d is not present\n",51);
    }

    return 0;
}