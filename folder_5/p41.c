//Să se scrie o funcție C care primeşte doi parametri, n şi k şi returnează numărul de cifre ale lui n care divid pe k
#include <stdio.h>
int nr_cif(int d,int p)
{
     int nr=0,uc;
     while(d)
     {
         uc=d%10;
         if(uc)
         if(p%uc==0)
                nr++;
            d/=10;
     }
     return nr;
}
int main()
{
  int d,p;
  scanf("%d%d",&d,&p);
  printf(nr_cif(d,p));
  return 0;
}
