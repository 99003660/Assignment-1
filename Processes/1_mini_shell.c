//minishell design that executes 6 commands

#include<stdio.h>
#include<unistd.h>
#include<string.h>
#include<sys/wait.h>

int main()
{
    pid_t ret;
    int status;
    int cmd_exec;
    char command[10];
    printf("Enter your command:");
    scanf("%s", command);                  
    ret=fork();
    
    if(ret<0)
    {
        perror("fork");
        exit(1);
    }
    if(ret==0)
    {
        cmd_exec=execlp(command,command);
        if(cmd_exec<0)
        {
            perror("execlp");
            exit(2);
        }
        exit(0);
    }
    else
    {
        waitpid(-1,&status,0);                   //waits untis the child has changed state;
        printf("parent--child exit status=%d\n",
			WEXITSTATUS(status));
    }
}
