#include<stdio.h>
int main()
{
  int p;
  p = fork();
  if (p == 0)
  {
    printf("Hola, soy el proceso hijo con ID %d \n", getpid());
  }
  else
  {
    printf("Hola, soy el proceso padre con ID %d \n", getpid());
  }
  puts("Fin \n");
}