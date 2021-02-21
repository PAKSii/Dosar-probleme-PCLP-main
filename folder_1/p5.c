// Rezolvarea problemei : Fiind date două numere naturale x și y determinați valoarea care trebuie adunată la x pentru a obține triplul lui y.
#include <stdio.h>
void main()
{
  int x,y;
  scanf("%d%d",&x,&y);
  printf("Valoarea care trebuie adaugata la x pentru a obtine triplul lui y este %d",3*y-x);
}
