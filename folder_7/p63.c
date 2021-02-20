//Să se scrie o funcție C care să returneze suma cifrelor unui număr natural transmis ca parametru.
#include <stdio.h>
int sumcif(int n)
{
    if(n<10)
        return n;
    else
        return n%10+sumcif(n/10);
}
int main()
{
  int n;
  scanf("%d",&n);
  printf(sumcif(n));
  return 0;
}
