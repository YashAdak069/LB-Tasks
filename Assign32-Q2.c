#include<stdio.h>

void struprx(char *str)
{
    while( *str != '\0')
    {
        if(*str >= 97 && *str <= 122)
        {
            *str = *str - 32;
        }
        str++;
    }
}


int main()
{
    char arr[20];

    printf("Enter a String : ");
    scanf("%[^'\n']s",arr);

    struprx(arr);

    printf("Modified String is : %s\n",arr);

    return 0;
}