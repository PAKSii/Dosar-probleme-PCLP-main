//Să se scrie definiția completă a funcției C P care primește prin intermediul parametrului n un număr natural cu cel mult 9 cifre, iar prin intermediul parametrului c o cifră. Funcția întoarce tot prin intermediul parametrului n numărul obținut prin eliminarea tuturor aparițiilor cifrei c.
#include <stdio.h>
void P(int n, int c)
{
    int nr=0,p=1;
    while(n)
    {
        int cif=n%10;
        if(cif!=c)
        {
            nr=nr+p*cif;
            p=p*10;
        }
        n/=10;
    }
    n=nr;
}
int main()
{
  int n,c;
  scanf("%d%d",&n,&c);
  P(n,c);
  return 0;
}
