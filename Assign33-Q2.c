#include<stdio.h>

int CountChar(char *str,char ch)
{
    int iCnt = 0;

    while(*str != 0)
    {
        if(*str == ch)
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}

int main()
{
    char arr[20];
    char cValue;
    int iRet = 0;

    printf("Enter a String : ");
    scanf("%[^\n]s",arr);

    printf("Enter a character to find its frequency : ");
    scanf(" %c", &cValue);

    iRet = CountChar(arr,cValue);

    printf("The Frequency is : %d\n",iRet);

    return 0;
}