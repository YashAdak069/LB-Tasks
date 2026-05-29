#include<stdio.h>

int Display(int iNo)
{
    if( iNo < 10 )
    {
        printf("HELLO");
    }
    else
    {
        printf("DEMO");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a Value : ");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;

}