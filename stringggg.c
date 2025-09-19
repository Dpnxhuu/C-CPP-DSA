#include <stdio.h>
#include <string.h>
void main()
{
  char str[100];
  gets(str);
  int size = 0, x = 0;
  while (str[x] != '\0')
  {
    size++;
    x++;
  }
  int j = size - 1;
  int i = 0;
  while (i <= j)
  {
    char X = str[i];
    str[i] = str[j];
    str[j] = X;

    i++;
    j--;
  }
  puts(str);
}

