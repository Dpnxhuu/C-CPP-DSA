#include <stdio.h>
void main()
{
   int ar[5], br[5], i;
   for (i = 0; i < 5; i++)
      scanf("%d", &ar[i]);

   for (i = 0; i < 5; i++)
      printf("%2d", ar[i]);
      
      printf("\n");

   for (i = 0; i < 5; i++)
   {
      br[i] = ar[i];
   }

   for (i = 0; i < 5; i++)
      printf("%2d", br[4 - i]);
}
