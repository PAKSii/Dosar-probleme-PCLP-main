//Se citește un număr natural n. Să se determine câte cifre 0 și câte cifre 1 are reprezentarea în baza 2 a acestui număr.
#include <stdio.h>
int main()
{
   int n,z,u;
   z=u=0;
   scanf("%d",&n);
   while(n)
   {
     if(n%2==0)
    z++;
    else
    u++;
    n/=2;
   }
   printf("%d %d",z,u);
    return 0;
}
