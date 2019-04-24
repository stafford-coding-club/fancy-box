#include <stdio.h>
#include <stdlib.h>

int main(void) {

   // Fancy box
   for (int y = 0; y < 10; y++) {
      for (int x = 0; x < 10; x++) {
         if (y == 0 || x == 0 || x == 9 || y == 9)
            printf("O"); 
         else 
            printf(" ");
      }
      printf("\n");
   }

   printf("\n\n");

   // SUPER fancy box (really fancy) (like seriously)
   for (int y = 0; y < 10; y++) {
      for (int x = 0; x < 10; x++) {
         if (y == 0 || x == 0 || x == 9 || y == 9 || x == y || x == 9 - y)
            printf("O"); 
         else 
            printf(" ");
      }
      printf("\n");
   }

   return 0;
}