#include<stdio.h>

void Table(int iNo)
{
    int iCnt = 0;
    int iMul = 1;

    for(iCnt=1; iCnt<=10; iCnt++)
    {
        printf("%d * %d = %d\n",iNo,iCnt,(iCnt*iNo));      
    }
    
}

int main()
{
    int iValue = 0;

    printf("Enter a number : ");
    scanf("%d",&iValue);
    
    Table(iValue);

    return 0;
}