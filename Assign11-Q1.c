#include<stdio.h>

void RangeDisplay(int iStart, int iEnd)
{
    int iNum = 0;

    if(iStart > iEnd)
    {
        printf("Invalid Range\n");
    }

    for(iNum = iStart; iNum <= iEnd; iNum++)
    {
        printf("%d\t",iNum);
    }

}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter Starting point : ");
    scanf("%d",&iValue1);

    printf("Enter Ending point : ");
    scanf("%d",&iValue2);

    RangeDisplay(iValue1, iValue2);

    return 0;
}