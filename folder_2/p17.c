// Rezolvarea problemei :  Se citește de la tastatură un număr natural de 3 cifre. Să se stabilească dacă are toate cifrele egale.
#include <stdio.h>
void main()
{
  int n;
  scanf("%d",&n);
  n%10==n/10%10 && n/10%10==n/100 ? printf("Are cifre egale") : printf("Nu are cifre egale");
}
