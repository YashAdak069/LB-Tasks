#include<stdio.h>

void strlwrx(char *str)
{
    while( *str != '\0')
    {
        if(*str >= 65 && *str <= 90)
        {
            *str = *str + 32;
        }
        str++;
    }
}


int main()
{
    char arr[20];

    printf("Enter a String : ");
    scanf("%[^'\n']s",arr);

    strlwrx(arr);

    printf("Modified String is : %s\n",arr);

    return 0;
}