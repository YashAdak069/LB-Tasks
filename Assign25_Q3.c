#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    int iNo = 0;
    char ch = '\0';
    

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1, iNo = 1, ch = 'a'; j <= iCol; j++, iNo++, ch++)
        {
            if((i % 2) != 0)
            {
                printf("%c\t",ch);
            }
            else
            {
                printf("%d\t",iNo);
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