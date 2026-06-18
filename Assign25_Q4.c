#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    int iNo = 0;
    int No = 0;    

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1, iNo = 1, No = -1; j <= iCol; j++, iNo++)
        {
            if((i % 2) != 0)
            {
                printf("%d\t",iNo);
            }
            else
            {
                printf("%d\t",No--);    
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