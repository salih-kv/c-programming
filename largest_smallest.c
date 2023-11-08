#include <stdio.h>

int main()
{
  int arr[] = {3, 18, 10, 4, 2, 22, 150};
  int i, small, large;
  const int l = sizeof(arr) / sizeof(arr[0]);
  small = arr[0]; // Assume first element is smallest
  large = arr[0]; // Assume first element is largest

  for (i = 1; i < l; i++)
  {
    if (arr[i] < small)
    {
      small = arr[i];
    }
    if (arr[i] > large)
    {
      large = arr[i];
    }
  }
  printf("Largest element is : %d\n", large);
  printf("Smallest element is : %d\n", small);
  return 0;
}