#include<stdio.h>

int CountSmall(char *str)
{
    static int iCnt = 0;

    if(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            iCnt++;
        }
        str++;
        CountSmall(str);
    }

    return iCnt;
}

int main()
{
    char Arr[20] = {'\0'};
    int iRet = 0;

    printf("Enter a String : ");
    scanf("%[^\n]s",Arr);

    iRet = CountSmall(Arr);

    printf("Number of Small Characters is : %d",iRet);
    
    return 0;
}