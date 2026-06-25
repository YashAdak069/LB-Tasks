#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkChar(char *str,char ch)
{
    BOOL found = FALSE;

    while(*str != 0)
    {
        if(*str == ch)
        {
            found = TRUE;
            break;
        }
        str++;
    }
    return found;
}

int main()
{
    char arr[20];
    char cValue;
    BOOL bRet = FALSE;

    printf("Enter a String : ");
    scanf("%[^\n]s",arr);

    printf("Enter a character to find : ");
    scanf(" %c", &cValue);

    bRet = ChkChar(arr,cValue);

    if(bRet == TRUE)
    {
        printf("%c is present in %s\n",cValue,arr);
    }
    else
    {
        printf("Not Present\n");
    }

    return 0;
}