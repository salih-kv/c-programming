#include <stdio.h>
int main()
{
  int n, i;
  unsigned long long int fact = 1;
  /*
    factorial of a number can grow very quickly and defined only defined for non-negative integers, 'int' or 'long' variable may not be sufficient to store the result. Using an unsigned data type ensures that the result remains non-negative.
  */
  printf("Enter an integer: ");
  scanf("%d", &n);

  // shows error if the user enters a negative integer
  if (n < 0)
    printf("Error! Factorial of a negative number doesn't exist.");
  else
  {
    for (i = 1; i <= n; ++i)
    {
      fact *= i;
    }
    printf("Factorial of %d = %llu", n, fact);
  }

  return 0;
}
