#include<stdio.h>
int main()
{
  int i = 10;
  printf("Hola, soy un proceso %d \n", i);
  i = 12;
  fork();
  printf("Hola, soy un proceso %d \n", i);
  puts("Fin \n");
}