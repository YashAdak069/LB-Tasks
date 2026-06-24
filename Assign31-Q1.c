#include<stdio.h>

int CountCapital(char *str)
{
    int iCount = 0;

    //Filter

    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            iCount++;
        }

        str++;
    }

    return iCount;
}

int main()
{
    char arr[20] = {'\0'};
    int iRet = 0;

    printf("Enter String : ");
    scanf("%[^'\n']s",arr);

    iRet = CountCapital(arr);

    printf("Count of Capital Letters is : %d\n",iRet);

    return 0;
}