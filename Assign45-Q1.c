#include<stdio.h>

void Display(int iNo)
{
    static int iCnt = 1;

    if(iNo >= iCnt)
    {
        printf("%d\t*\t",iNo);
        iNo--;
        Display(iNo);
    }
}

int main()
{
    int iValue = 0;
    
    printf("Enter Frequency : ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}