//Să se scrie o funcție C care să returneze numărul de cifre egale cu zero ale unui număr natural transmis ca parametru.
#include <stdio.h>
int nr_cif_zero(int x)
{
  if(x==0)
    return 1;
  else
  {
      int nr=0;
      while(x)
        {
          if(x%10==0)

            nr++;
            x/=10;
          }
  }
       return nr;
}
int main()
{
  int x;
  scanf("%n",&x);
  printf(nr_cif_zero(x));
  return 0;
}
