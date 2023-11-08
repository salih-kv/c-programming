#include <stdio.h>
#include <string.h>
#include <conio.h>

struct studentRecord
{
  int rollNum;
  char fullName[100];
  int age;
  char place[50];
};

// int main()
// {
//   struct studentRecord sr1;

//   sr1.rollNum = 4500;
//   strcpy(sr1.fullName, "John");
//   sr1.age = 24;
//   strcpy(sr1.place, "Calicut");

//   printf("%s", sr1.fullName);

//   getch();
//   return 0;
// }

int main()
{
  struct studentRecord sr1 = {3400, "John", 22, "Kochi"};
  printf("%s", sr1.fullName);

  getch();
  return 0;
}