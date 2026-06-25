#include<stdio.h>

void DisplayDigit(char *str)
{
    while( *str != '\0')
    {
        if((*str >= 48 && *str <=57))
        {
            printf("%c",*str);
        }
        str++;
    }
    printf("\n");
}


int main()
{
    char arr[20];

    printf("Enter a String : ");
    scanf("%[^'\n']s",arr);

    DisplayDigit(arr);

    return 0;
}