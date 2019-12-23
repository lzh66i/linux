#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main()
{
    int i;
    pid_t pid;
    printf("xxxxxxxx\n");
    
    for(i = 0; i < 5; i++)
    {
        pid = fork();
        if(pid == 0)
        {
            break;
        }
    }

    if(i < 5)
    {
        sleep(i);
        printf("I'm %d child,pid = %u\n",i+1,getpid());

    }
    else
    {
        sleep(i);
        printf("I'm parent\n");

    }
    return 0;
}
