#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <signal.h>

void sighandler(int);

int testSig()
{
    signal(SIGINT, sighandler);
    while (1)
    {
        printf("sleep for 1 second ..\n");
        sleep(1);
    }
    // sleep(1);
    return (0);
}

void sighandler(int signum)
{
    printf("signal % break ..\n", signum);
    exit(1);
}