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

int CountGreater(PNODE first, int x)
{
    int iCount = 0;

    while(first != NULL)        // Type 1
    {
        if(first->data > x)
        {
            iCount++;
        }

        first = first->next;
    }

    return iCount;
}

int main()
{
    PNODE head = NULL;
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);
    
    InsertFirst(&head, 100);
    InsertFirst(&head, 510);
    InsertFirst(&head, 210);
    InsertFirst(&head, 11);
    InsertLast(&head, 101);
    InsertLast(&head, 121);

    Display(head);

    iRet = CountGreater(head, iValue);
    printf("Count of elements greater than %d is : %d\n",iValue,iRet);

    return 0;
}