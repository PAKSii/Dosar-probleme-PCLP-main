//Să se scrie o funcție C care să returneze ultima cifră pară a unui număr natural transmis ca parametru.
#include <stdio.h>
int UCP(long n)
{
      if(n<9&&n%2==1)
            return -1;
        if(n%10%2!=0)
            return -1;
        else
            return n%10;
}
int main()
{
  long n;
  scanf("%d",&n);
  printf(UCP(n));
  return 0;
}
