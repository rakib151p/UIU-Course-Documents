#include <stdio.h>

int main(){
   char s = 'm';
   char t = 'z' - 'y';

   printf("%d\n", s);
   printf("%c\n", s);
   printf("%d\n", (s+1));
   printf("%c\n", (s+1));
   printf("%d\n", (s-1));
   printf("%c\n", (s-1));
   printf("%d\n", t);
   // printf("%c", t);

   return 0;
}