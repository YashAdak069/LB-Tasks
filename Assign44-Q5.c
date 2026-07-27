#include<stdio.h>

void Display(int iNo)
{
    static char s = 'a';
    static int iCnt = 1;

    if(iCnt <= iNo)
    {
        printf("%c\t",s);
        s++;
        iCnt++;
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