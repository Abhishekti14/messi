#include <stdio.h>
int main()
{
    int prev=0;
    int curr=1;
    int n;
    int next,a;
    printf("Enter the number of terms\n");
  scanf("%d", &n);

  printf("First %d terms of Fibonacci series are:\n",n);

  for (a = 0; a < n; a++)
  {
    if (a <= 1)
      next = a;
    else
    {
      next = prev + curr;
      prev = curr;
      curr = next;
    }
    printf("%d\n", next);
  }

  return 0;
}

