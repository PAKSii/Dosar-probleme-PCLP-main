// Rezolvarea problemei :  Se dă un număr natural n. Calculați ultima cifră a lui 9n.
#include <stdio.h>
#include <math.h>
void main()
{
  int n;
  scanf("%d",&n);
  int c=pow(9,n);
  printf("%d",c%10);
}
