#include<stdio.h>

int CountWhite(char *str)
{
    int iCnt = 0;
    while( *str != '\0')
    {
        if( *str == 32)
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
    int iRet = 0;

    printf("Enter a String : ");
    scanf("%[^'\n']s",arr);

    iRet = CountWhite(arr);

    printf("Numbers of whitespace are : %d\n",iRet);

    return 0;
}