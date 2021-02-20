//Să se scrie o funcție C care să returneze oglinditul unui număr natural transmis ca parametru.
#include <stdio.h>
int oglindit(int x)
{
    int inv=0;
    while(x)
    {
        inv=inv*10+x%10;
        x/=10;
    }
    return inv;
}
int main()
{
  int x;
  scanf("%d",&x);
  printf(oglindit(x));
  return 0;
}
