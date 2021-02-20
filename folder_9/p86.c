//Să se scrie o funcție C recursivă care să determine numărul de cifre egale cu zero ale unui număr natural transmis ca parametru și să întoarcă rezultatul prin intermediul unui parametru de ieșire.
#include <stdio.h>
void nr_cif_zero(long n,int  nr)
{
    if(n<10)
        nr=n;
    else
        if(n%10==0)
            {
        nr=nr+1;
    nr_cif_zero(n/10,nr);
            }
}
int main()
{
  long n,int nr;
  scanf("%l",&n);
  scanf("%d",&nr);
  nr_cif_zero(n,nr);
  printf("%l",nr);
  return 0;
}
