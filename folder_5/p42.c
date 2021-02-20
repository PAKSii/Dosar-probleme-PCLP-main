//Să se scrie o funcție C care să returneze pentru un număr natural n transmis ca parametru valoarea lui n!, adică 1•2•...•n.
#include <stdio.h>
int fact(int n)
{
    int x=1,i;
    if(n==0)
        return 1;
    else
        for(i=2;i<=n;i++)
        x*=i;
    return x;
}
int main()
{
  int n;
  scanf("%d",&n);
  printf(fact(n));
  return 0;
}
