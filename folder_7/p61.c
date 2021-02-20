//Să se scrie o funcție C recursivă care să returneze cifra maximă a unui număr natural transmis ca parametru.
#include <stdio.h>
int cifmax(long n)
{
    if(n<10)
        return n;
    else
    {
        if(n%10>cifmax(n/10))
            return n%10;
        else
            return cifmax(n/10);
    }
}
int main()
{
  long n;
  scanf("%l",&n);
  printf(cifmax(n));
  return 0;
}
