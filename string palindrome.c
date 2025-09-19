#include <stdio.h>
#include <string.h>
void main()
{
  char str[100];
  gets(str);
  int size = strlen(str);
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
   printf("%s\n",str);
}
