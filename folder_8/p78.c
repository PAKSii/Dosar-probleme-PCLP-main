//Să se scrie o funcție C recursivă care să returneze suma cifrelor unui număr natural transmis ca parametru.
#include <stdio.h>
int sumcif(long n)
{
    if(n<10)
        return n;
    else
        return n%10+sumcif(n/10);
}
int main()
{
  long n;
  scanf("%l",&n);
  printf(sumcif(n));
  return 0;
}
