// Rezolvarea problemei : Se citește de la tastatură un număr natural de 3 cifre. Să se determine câte cifre impare conține.
#include <stdio.h>
void main()
{
  int n,ct=0;
  scanf("%u",&n);
  while(n)
  {
    if(n%10%2==1)
      ct++;
    n/=10;
  }
  printf("Numarul contine %u cifre impare",ct);
}
