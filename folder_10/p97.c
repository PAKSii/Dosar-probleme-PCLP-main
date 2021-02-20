// incercare alocare dinamica
#include <stdio.h>
#include <stdlib.h>

int main ()
{
   char *str;
   str = (char *) malloc(15);
   strcpy(str, "Sir simplu");
   printf("Sirul = %s,  Adresa = %u\n", str, str);
   str = (char *) realloc(str, 25);
   strcat(str, "inlocuitor");
   printf("Sir = %s,  Adresa = %u\n", str, str);
   free(str);
   return(0);
}
