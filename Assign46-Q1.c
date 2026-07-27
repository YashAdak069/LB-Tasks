#include<stdio.h>

int WhiteSpac(char *str)
{
    static int iCnt = 0;

    if(*str != '\0')
    {
        if(*str == ' ')
        {
            iCnt++;
        }
        str++;
        WhiteSpac(str);
    }

    return iCnt;
}

int main()
{
    char Arr[20] = {'\0'};
    int iRet = 0;

    printf("Enter a String : ");
    scanf("%[^\n]s",Arr);

    iRet = WhiteSpac(Arr);

    printf("Number of White Space is : %d",iRet);
    
    return 0;
}