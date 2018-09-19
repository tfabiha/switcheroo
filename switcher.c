# include <stdio.h>
# include <stdlib.h>
# include <time.h>

int main()
{
  srand(time(NULL));

  int ray[10];

  for (int i = 0; i < 10; i++)
  {
    ray[i] = rand();
  }
  ray[9] = 0;

  for (int i = 0; i < 10; i++)
  {
    printf("Element %d of the first array is %d.\n", i, ray[i]);
  }

  int ray2[10];
  int *point = ray;

  printf("\n");

  for (int i = 9; i >= 0; i--)
  {
    ray2[i] = *point;
    point += 1;
  }

  for (int i = 0; i < 10; i++)
  {
    printf("Element %d of the second array is %d.\n", i, ray2[i]);
  }
}
