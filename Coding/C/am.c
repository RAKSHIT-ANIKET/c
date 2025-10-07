#include <stdio.h>

int main()
{
  int n;
  int a, b;

  printf("value of a is :");
  scanf("%d", &a);

  printf("value of b is :");
  scanf("%d", &b);

  for (int i = 0; i < n; i++)
  {
    if (a % n == 0 && b % n == 0)
    {
      printf("the hcf is %d", n);
    }
    else
    {
      printf("no HCF exists");
    }
  }

  return 0;
}