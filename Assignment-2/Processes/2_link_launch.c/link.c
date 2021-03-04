//linking the c program within the child process

#include<unistd.h>
#include<stdio.h>
#include<string.h>
#include<sys/wait.h>

int main()
{
    pid_t ret;
    int status;
    int execute;
    int p;

    ret=fork();
    if(ret < 0)
    {
        perror("fork");
        exit(1);
    }
    if(ret == 0)
    {
                                   
        execute = execl("/usr/bin/gcc","gcc","-c","sample.c",NULL); 
	    //execl("/bin/gcc","gcc","sample.o","-o",s,NULL); 

        if(execute<0)
        {
            perror("execv");
            exit(2);
        }
        exit(0);

    }
    else
    {
        waitpid(-1,&status,0);  //suspends execution process untill child has changed state
        printf("parent--child exit status=%d\n",
		WEXITSTATUS(status));
		
    }
    return 0;

}
