#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    int iNo = 1;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            printf("%d\t",iNo++);
            
            if(iNo > 9)
            {
                iNo = 1;
            }
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter the number of rows and colomns : ");
    
    printf("\n");
    
    printf("Rows : ");
    scanf("%d",&iValue1);

    printf("Colomns : ");
    scanf("%d",&iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}