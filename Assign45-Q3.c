#include<stdio.h>

int Strlen(char *str)
{
    static int iCnt = 0;

    if(*str != '\0')
    {
        iCnt++;
        str++;
        Strlen(str);
    }

    return iCnt;
}

int main()
{
    char Arr[] = {'\0'};
    int iRet = 0;

    printf("Enter a String : ");
    scanf("%[^\n]s",Arr);

    iRet = Strlen(Arr);

    printf("Number of Characters is : %d",iRet);
    
    return 0;
}