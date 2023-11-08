#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is prime
bool isPrime(int num)
{
  if (num <= 1)
  {
    printf("Numbers less than or equal to 1 are not prime");
    return false;
  }
  for (int i = 2; i * i <= num; i++)
  {
    if (num % i == 0)
    {
      return false; // Found a factor, not prime
    }
  }
  return true; // No factors found, prime
}

int main()
{
  int number;
  printf("Enter an integer: ");
  scanf("%d", &number);

  // Check if the number is prime using the isPrime function
  if (isPrime(number))
  {
    printf("%d is a prime number.\n", number);
  }
  else
  {
    printf("%d is not a prime number.\n", number);
  }

  return 0;
}
