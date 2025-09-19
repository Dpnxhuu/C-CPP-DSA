#include<stdio.h>
#define a 30 
#define b 40
void main()
{
   #ifdef a
   printf("hello\n");
   #endif
   #ifndef c
   printf("not defined c");
   #endif
}
