#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

void AppnedLast(char fName[], char str[])
{
    int fd = 0;
    char Buffer[1024];
    int iRet = 0;

    fd = open(fName, O_WRONLY | O_APPEND);

    if(fd == -1)
    {
        printf("Unable to open the file\n");
        return;
    }
    else
    {
        printf("File opened with fd : %d\n",fd);

        if(write(fd, str, strlen(str)) == -1)
        {
            printf("Unable to write to the file\n");
        }
        else
        {
            printf("String appended successfully!\n");
        }

    }
    close(fd);
}

int main()
{
    char Filename[30];
    char str[30];

    printf("Enter the name of the File : ");
    scanf("%s", Filename);

    printf("Enter a String : ");
    scanf("%s", str);

    AppnedLast(Filename, str);

    return 0;
}