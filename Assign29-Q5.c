#include<stdio.h>

void DisplaySchedule(char chDiv)
{
    if(chDiv == 'A' || chDiv == 'a')
    {
        printf("Your exam is at 7:00 am\n");
    }

    else if(chDiv == 'B' || chDiv == 'b')
    {
        printf("Your exam is at 8:30 am\n");
    }

    else if(chDiv == 'C' || chDiv == 'c')
    {
        printf("Your exam is at 9:20 am\n");
    }

    else if(chDiv == 'D' || chDiv == 'd')
    {
        printf("Your exam is at 10:30 am\n");
    }

    else
    {
        printf("No such division exists\n");
    }
}

int main()
{
    char cValue = '\0';
    
    printf("Enter your Division : ");
    scanf("%c",&cValue);

    DisplaySchedule(cValue);

    return 0;
}