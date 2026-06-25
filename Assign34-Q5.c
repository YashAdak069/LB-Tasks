#include<stdio.h>

void StrCatX(char *src, char *dest)
{
    while(*dest != '\0')
    {
        dest++;
    }
    while(*src != '\0')
    {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';  
}
    


int main()
{
    char arr[50] = "Marvellous Infoystems ";
    char brr[30] = "Logic Building";

    StrCatX(brr,arr);

    printf("Concatinetated String : %s",arr);

    return 0;
}