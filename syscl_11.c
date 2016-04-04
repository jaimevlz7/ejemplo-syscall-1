#include<stdio.h>
#include<stdlib.h>
int main()
{
  int p;
  p = fork();
  if (p == 0)
  {
    printf("Hola, soy el proceso hijo con ID %d \n", getpid());
	sleep(5);
	printf("Mi proceso padre es %d \n", getppid());
	exit(0);
  }
  else
  {
    printf("Hola, soy el proceso padre con ID %d \n", getpid());
	wait(0);
  }
  puts("Fin \n");
}