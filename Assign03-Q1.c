#include<stdio.h>

void PrintEven(int iNo)
{
    if(iNo <= 0)
    {
        return;
    }

    int iCnt = 1;
    for(iCnt; iCnt<=iNo; iCnt++)
    {
        printf("%d\t",iCnt*2);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number : ");
    scanf("%d",&iValue);

    PrintEven(iValue);

    return 0;
}