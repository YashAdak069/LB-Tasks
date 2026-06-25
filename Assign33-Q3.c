#include<stdio.h>

int FirstChar(char *str,char ch)
{
    int index = 0;
    int pos = -1;

    while(*str != 0)
    {
        if(*str == ch)
        {
            pos = index;
            break;
        }
        str++;
        index++;
    }
    return pos;
}

int main()
{
    char arr[20];
    char cValue;
    int iRet = 0;

    printf("Enter a String : ");
    scanf("%[^\n]s",arr);

    printf("Enter a character to find its occurence : ");
    scanf(" %c", &cValue);

    iRet = FirstChar(arr,cValue);
    if(iRet == -1)
    {
        printf("Not present\n");
    }
    else
    {
    printf("The First Occurence is : %d\n",iRet);
    }

    return 0;
}