#include "my.h"
int main()
{
	pid_t r;
	int r_num;
	int pipefd[2];
	char buf[4096];
 	int i=0; 
	memset(buf,0,sizeof(buf));
	if(pipe(pipefd)<0)
	{
		perror("pipe failed.\n");
		return -1;
	}
	r=fork();
	if(r<0)
	{
		perror("fork failed.\n");
		return -1;
	}
	else if(r==0)
	{
	char b ='a';
	close(pipefd[1]);
	for(int i=0;i<65536;i++)
	{
		printf("child write %d times.\n",i);
		write(pipefd[1],&b,1);
	}
	//if((r_num=read(pipefd[0],buf,100))>0)
		printf("child read from pipe: %s,total=%d\n",buf,r_num);
		close(pipefd[1]);
		exit(0);
	}

	else
	{
		wait(NULL);
		close(pipefd[1]);
		for(int i=0;i<65536;i++)
		{
		read(pipefd[0],buf,1);
		printf("%d:parent read from pipe: %s\n",i,buf);
		}
		/*if(write(pipefd[1],"123456789",10)!=-1)
			printf("parent write ok.\n");*/
		close(pipefd[0]);
		return 0;
	}
}
