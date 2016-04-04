#include<stdio.h>
int main()
{
  int p;
  p = fork();
  if (p == 0)
  {
    printf("Hola, soy el proceso hijo \n");
  }
  else
  {
    printf("Hola, soy el proceso padre \n");
  }
  puts("Fin \n");
}