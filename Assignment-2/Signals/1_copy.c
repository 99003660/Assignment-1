//copy file contents using open, read, write and close system calls

#include<unistd.h>
#include<fcntl.h>

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int fd[2], bytes_r, bytes_w;
	
    //open the two files
    fd[0] = open("alpha.txt",O_RDONLY);
    fd[1] = open("beta.txt", O_WRONLY | O_CREAT , 0644); 

    //check for errors
	if(fd[0]<0)
	{
		perror("open");
		exit(1);
	}
    if(fd[1]<0)
    {
		perror("open");
		exit(2);
	}
	int maxlen=128;
	char buf[maxlen];

    //write from fd[0] to fd[1]
	bytes_r = read(fd[0],buf,maxlen);
  bytes_w = write(fd[1], buf, bytes_r);

    //checks for errors and exit
	if(bytes_r<0)
	{
		perror("read");
		exit(2);
	}
    if(bytes_w<0)
	{
		perror("write");
		exit(3);
	}
    // show the outputs
    printf("written successfully, nbytes_w = %d\n",bytes_w);
	close(fd[0]);
    close(fd[1]);
	return 0;
}
