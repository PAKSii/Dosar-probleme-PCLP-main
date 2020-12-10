// Rezolvarea problemei : Într-un stup, pe un fagure de miere infinit, trăiește o albină foarte harnică. Fagurele este alcătuit din celule hexagonale, fiecare celulă având șase vecini. În prima zi albina depune nectar într-o singură celulă. În fiecare din zilele următoarele, albina depune nectar în celulele vecine cu cele în care a fost deja depus nectar.Aflați în câte celule este depus nectar după n zile.
#include <stdio.h>
void main()
{
  int n,c=0;
  scanf("%d",&n);
  for(int i=1;i<=n;i++)
    c=c+6*i;
  c++;
  printf("Dupa %d zile, albina a depus nescar in %d celule.",n,c);
}
