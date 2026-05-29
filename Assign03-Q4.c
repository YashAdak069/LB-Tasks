#include<stdio.h>

void DisplayConvert(char cValue)
{

    if(cValue >= 'A' && cValue <= 'Z')
    {
        printf("After case conversion : %c",cValue + 32);
    }
    else if(cValue >= 'a' && cValue <= 'z')
    {
        printf("After case conversion : %c",cValue - 32);
    }

}

int main()
{
    char cValue = '\0';

    printf("Enter character : ");
    scanf("%c",&cValue);

    DisplayConvert(cValue);
    
    return 0;
}