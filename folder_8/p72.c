//Să se scrie o funcție C recursivă care primește ca parametri un număr natural n și o cifră c și returnează numărul obținut prin eliminarea din n a tuturor aparițiilor lui c.
#include <stdio.h>
int elimcif(long n,int c)
{
    if(n<10)
    {
        if(n==c)
            return 0;
        else
            return n;
    }
    else
        if(n%10==c)
            return elimcif(n/10,c);
        else
            return (n%10)+10*elimcif(n/10,c);
}
int main()
{
  long n;
  int c;
  scanf("%l",&n);
  scanf("%d",&c);
  printf(elimcif(n,c));
  return 0;
}
