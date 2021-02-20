//Să se scrie o funcție C care să returneze pentru un număr natural n transmis ca parametru numărul de cifre zero de la finalul lui n! = 1•2•...•n.
#include <stdio.h>
int zerof(int n)
{

    int x=1,i,ct=0;
        for(i=1;i<=n;i++)
        x*=i;

while(x%5==0)
{
    ct++;
    x/=5;
}
return ct;
}
int main()
{
  int n;
  scanf("%d",&n);
  printf(zerof(n));
  return 0;
}
