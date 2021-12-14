/* hello_signal.c */
#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>

int wait = 1;

void handler(int signum)
{ //signal handler
  printf("Hello World!\n");
  wait = 0;
}

int main(int argc, char * argv[])
{
  signal(SIGALRM,handler); //register handler to handle SIGALRM
  while (1){
//       Just playing around
      alarm(2); //Schedule a SIGALRM for 2 second
      while(wait); //busy wait for signal to be delivered
      printf("Turing was right!\n");
      wait = 2;
  }
  return 0; //never reached
}