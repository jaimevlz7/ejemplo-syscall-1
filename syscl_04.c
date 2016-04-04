#include<stdio.h>
int main()
{
  printf("Hola, soy un proceso \n");
  fork();
  printf("Fin \n");
}