#include <stdio.h>
#include <stdlib.h>

int main(void) {

   const unsigned int size = 10;

   // Fancy box
   for (int y = 0; y <= size; y++) {
      for (int x = 0; x <= size; x++) {
         if (y == 0 || x == 0 || x == size || y == size)
            printf("O"); 
         else 
            printf(" ");
      }
      printf("\n");
   }

   printf("\n\n");

   // SUPER fancy box (really fancy) (like seriously)
   for (int y = 0; y <= size; y++) {
      for (int x = 0; x <= size; x++) {
         if (y == 0 || x == 0 || x == size || y == size || x == y || x == size - y)
            printf("O"); 
         else 
            printf(" ");
      }
      printf("\n");
   }

   return 0;
}