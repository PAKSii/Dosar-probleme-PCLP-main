//Să se scrie o funcție C recursivă care să returneze cifra minimă a unui număr natural transmis ca parametru.
#include <stdio.h>
int cifmin(long n)
{
    if(n<10)
        return n;

    if(n%10<cifmin(n/10))
        return n%10;
        else
            return cifmin(n/10);
}
int main()
{
  long n;
  scanf("%l",&n);
  printf(cifmin(n));
  return 0;
}
