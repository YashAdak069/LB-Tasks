#include<stdio.h>

void NumberX(int iNo)
{
    if(iNo < 0)
    {
        printf("Invalid Number ");
    }
    else if (iNo<50)
    {
        printf("Small");
    }
    else if (iNo>50 && iNo<100)
    {
        printf("Medium");
    }
    else if (iNo>100)
    {
        printf("Large");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a Number : ");
    scanf("%d",&iValue);

    NumberX(iValue); 

    return 0;
}