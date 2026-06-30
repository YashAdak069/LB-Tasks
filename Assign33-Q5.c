#include<stdio.h>

void StrRevX(char *str)
{
    char *start = NULL;
    char *end = NULL;
    char temp = '\0';

    start = str;

    while(*str != '\0')
    {
        str++;
    }
    
    str--;
    end = str;
    
   while(start < end)
   {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
   }
}

int main()
{
    char arr[20];

    printf("Enyter string : \n");
    scanf("%[^'\n']s",arr);

    StrRevX(arr);

    printf("Modified string : %s\n",arr);
    
    return 0;
}