#include<stdio.h>

void TableRev(int iNo)
{
    int iCnt = 0;
    int iMul = 1;

    for(iCnt=10; iCnt>=1; iCnt--)
    {
        printf("%d ",(iCnt*iNo));      
    }
    
}

int main()
{
    int iValue = 0;

    printf("Enter a number : ");
    scanf("%d",&iValue);
    
    TableRev(iValue);

    return 0;
}