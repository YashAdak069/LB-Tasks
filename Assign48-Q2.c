#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

void CreateFile(char fName[])
{
    int fd = 0;

    fd = creat(fName,0777);

    if(fd == -1)
    {
        printf("Unable to create file\n");
        return;
    }
    else
    {
        printf("File created with fd : %d\n",fd);
    }
    close(fd);
}

int main()
{
    char Filename[30];

    printf("Enter a File name : ");
    scanf("%s", Filename);

    CreateFile(Filename);

    return 0;
}