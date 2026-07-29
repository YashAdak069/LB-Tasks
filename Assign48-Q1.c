#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

void OpenFile(char fName[])
{
    int fd = 0;

    fd = open(fName,O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to open file\n");
        return;
    }
    else
    {
        printf("File opened with fd : %d\n",fd);
    }
    close(fd);
}

int main()
{
    char Filename[30];

    printf("Enter a File name : ");
    scanf("%s", Filename);

    OpenFile(Filename);

    return 0;
}