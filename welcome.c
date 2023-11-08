#include <stdio.h>

void main()
{
  char name[20];
  printf("What's your name? ");
  scanf("%s", &name);
  printf("Welcome %s!", name);
}