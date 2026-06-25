#include<stdio.h>

void strtogglex(char *str)
{
    while( *str != '\0')
    {
        if(*str >= 97 && *str <= 122)
        {
            *str = *str - 32;
        }
        else if( *str == 32 )
        {
            *str = 32;
        }
        else
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

    strtogglex(arr);

    printf("Modified String is : %s\n",arr);

    return 0;
}