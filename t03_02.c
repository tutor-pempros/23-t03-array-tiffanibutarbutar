// NIM - NAMA

#include <stdio.h>

int main(int _argc, char **_argv)
{
  int n, max, min, total = 0, average;

  scanf("%d", &n);

  int num[n];
  for (int i = 0; i < n; i++)
  { 
    scanf("%d", &num[i]);
    total += num[i];
  }
  
  max = num[0];
  min = num[0];
  for (int i = 0; i < n; i++)
  {
    if (num[i] > max)
    {
      max = num[i];
    }
    if (num[i] < min)
    {
      min = num[i];
    }
  }
  
  average = total / n;  
  printf("%d\n", min);
  printf("%d\n", max);
  printf("%d\n", average);
  return 0;
}
