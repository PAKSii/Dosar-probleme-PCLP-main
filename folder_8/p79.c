//Să se scrie o funcție C recursivă care să returneze numărul de cifre egale cu zero ale unui număr natural transmis ca parametru.
#include <stdio.h>
int nr_cif_zero(long n)
{
    if(n==0)
        return 1;
    if(n<10)
        return 0;
    if(n%10==0)
        return 1+nr_cif_zero(n/10);
    else
        return nr_cif_zero(n/10);
}
int main()
{
  long n;
  scanf("%l",&n);
  printf(nr_cif_zero(n));
  return 0;
}
