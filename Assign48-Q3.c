#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

void DisplayFile(char fName[])
{
    int fd = 0;
    char Buffer[1024];
    int iRet = 0;

    fd = open(fName,O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to open the file\n");
        return;
    }
    else
    {
        printf("File opened with fd : %d\n",fd);

        while((iRet = read(fd,Buffer,sizeof(Buffer)-1)) > 0)
        {
            Buffer[iRet] = '\0';
            printf("Contents of the file are : %s\n",Buffer);
        }

    }
    close(fd);
}

int main()
{
    char Filename[30];

    printf("Enter the name of the File : ");
    scanf("%s", Filename);

    DisplayFile(Filename);

    return 0;
}