// Rezolvarea problemei : Se dau trei numere naturale a b x. Să se verifice dacă numărul x aparține intervalului [a,b].
#include <stdio.h>
void main()
{
  int a,b,x;
  scanf("%d%d%d",&a,&b,&x);
  a<x && x<b ? printf("%d apartine intervalului [%d,%d]",x,a,b) : printf("%d nu apartine intervalului [%d,%d]",x,a,b);
}
