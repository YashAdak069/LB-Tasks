#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    if( iCol != iRow)
    {
        printf("Invalid Parameters\n");
        printf("Enter same number of Rows and Colomns");
        return;
    }

    for(i = iRow; i >= 1; i--)
    {
        for(j = 1; j <= iCol; j++)
        {
           if( i == j )
           {
            printf("#\t");
           }   
           else
           {
            printf("*\t");
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