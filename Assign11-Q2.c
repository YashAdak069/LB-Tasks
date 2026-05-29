#include<stdio.h>

void RangeDisplayEven(int iStart, int iEnd)
{
    int iNum = 0;

    if(iStart > iEnd)
    {
        printf("Invalid Range\n");
    }

    for(iNum = iStart; iNum <= iEnd; iNum++)
    {
        if(iNum % 2 == 0)
        {
            printf("%d\t",iNum);
        }
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

    RangeDisplayEven(iValue1, iValue2);

    return 0;
}