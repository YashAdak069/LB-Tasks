#include<stdio.h>

int Difference(char *str)
{
    int iCountCapital = 0;
    int iCountSmall = 0;
    int iDiff = 0;

    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            iCountCapital++;
        }

        else if(*str >= 'a' && *str <= 'z')
        {
            iCountSmall++;
        }

        str++;
    }

    iDiff = iCountSmall - iCountCapital;

    return iDiff;
}

int main()
{
    char Arr[50] = {'\0'};
    int iRet = 0;

    printf("Enter String : ");
    scanf("%[^'\n']s",Arr);

    iRet = Difference(Arr);

    printf("The difference between frequency of small and capital letters is : %d\n",iRet);
    return 0;
}